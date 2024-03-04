#include <stdio.h>
#include <locale.h>

/* Домашнее задание №10, занятие от 07.02.2024
Задача 5 (G8 ДЗ 3).

Числа в массив
В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы.
Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив.
Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести
массив по возрастанию в файл .txt.

Данные на входе: Строка из английских букв, цифр и знаков препинания
Данные на выходе: Последовательность целых чисел отсортированная по возрастанию

Пример
Данные на входе: data 48 call 9 read13 blank0a
Данные на выходе: 0 9 13 48

*/

void check_open_input_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("Ошибка, файл не существует или не может быть открыт\n");
    else
        printf("Файл input.txt успешно открыт для чтения...\n");
}

void check_open_output_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("Ошибка, файл не существует или не может быть открыт\n");
    else
        printf("Файл output.txt успешно открыт для записи...\n\n");
}

void doSwapArr(int i, int j, int arr[])
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void doArrSort(int size, int arr[])
{
    int no_swap = 1;
    int i = 0;
    int j = 0;

    for(i = 0; i < size - 1; i++)
    {
        no_swap = 1;

        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                doSwapArr(i, j, arr);
                no_swap = 0;
            }
        }
        if(no_swap != 0)
            break;
    }
}

int doFindNumbers(int length, char array[], int decNums[])
{
    int num = 0;
    int k = 0;
    int count_nums = 0;

    for (int i = 0; i < length; i++)
    {
        int negative = 0;

        if (array[i] >= '0' && array[i] <= '9')
        {
            if(array[i-1] == '-')
                negative = 1; // flag

            num = array[i] - '0';
            int j = i+1;

            while (array[j] >= '0' && array[j] <= '9')
            {
                num = num*10 + (array[j] - '0');
                j++;
            }

            if (negative)
                decNums[k] = num*(-1);
            else
                decNums[k] = num;

            count_nums++;
            k++;

            i = j; //смещаем индекс вперед на конец числа
        }
    }

    return count_nums;
}

void doPrint_intArray(int length, int array[])
{
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
}

void doPrint_intArray_to_out_file(int length, int array[], FILE *f_out)
{
    for (int i = 0; i < length; i++)
        fprintf(f_out, "%d ", array[i]);

    fclose(f_out);
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int length_str = 0;
    int nums_count = 0;

    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    char str1[10000] = {0};

    int decArrayNums[100] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    fscanf(f_in, "%[^\n]", &str1);
    fclose(f_in);

    length_str = strlen(str1);
    printf("Считано из файла:\n''%s'' | %d символов\n", str1, length_str);

    nums_count = doFindNumbers(length_str, str1, decArrayNums);

    printf("\nСтрока соддержит числа(%d):\n", nums_count);
    doPrint_intArray(nums_count, decArrayNums);

    printf("\n");

    printf("\nСортируем массив чисел(%d) по возрастанию:\n", nums_count);
    doArrSort(nums_count, decArrayNums);
    doPrint_intArray(nums_count, decArrayNums);

    doPrint_intArray_to_out_file(nums_count, decArrayNums, f_out); //файл закрывается внутри функции

    printf("\n");

    return 0;
}
