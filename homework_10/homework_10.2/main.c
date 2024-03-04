#include <stdio.h>
#include <locale.h>

/* Домашнее задание №10, занятие от 07.02.2024
Задача 2 (G4 ДЗ 1).

По одному разу
В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом. Найдите
только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через
пробел в файл .txt в лексикографическом порядке.

Данные на входе: Два слова из маленьких английских букв через пробел. Длинна каждого слова
не больше 100 символов.
Данные на выходе: Маленькие английские буквы через пробел.

Пример №1
Данные на входе: hello world
Данные на выходе: o
Данные на входе: aabcd bcef
Данные на выходе: b c

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

int check_unique_letter(int length, char array[], char letter)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (letter == array[i])
            counter++;
    }

    return counter;
}


int main(void)
{
    setlocale (LC_ALL, "Rus");

    int count1 = 0;
    int count2 = 0;
    int check2word = 0;

    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    char str1[100] = {0};
    char str2[100] = {0};

    int freq_str[26] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    check2word = fscanf(f_in, "%[a-z] %[a-z]", &str1, &str2);

    if (check2word < 2)
    {
        fclose(f_in);
        fclose(f_out);
        printf("Входные данные не корректны.\n");
        return -1;
    }

    fclose(f_in);

    count1 = strlen(str1);
    count2 = strlen(str2);

    printf("%s | %d символов\n", str1, count1);
    printf("%s | %d символов\n\n", str2, count2);

    for (int i = 0; i < count1; i++) //перебираем буквы первого слова
        if (check_unique_letter(count1, str1, str1[i]) == 1) //если i-буква единственная в слове1
            if (check_unique_letter(count2, str2, str1[i]) == 1) //проверяем её совпадения в слове2, если единственная в слове2
            {
                printf("%c ", str1[i]); //выводим букву на экран
                fprintf(f_out,"%c ",str1[i]);
            }

    printf("\n");

    fclose(f_out);

    return 0;
}
