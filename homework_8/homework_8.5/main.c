#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Домашнее задание №8, занятие от 24.01.2024
Задача 5 (E10 ДЗ 3)

Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

Данные на входе: 12 целых чисел через пробел
Данные на выходе: 12 целых чисел через пробел

Пример №1
Данные на входе:  4 -5  3 10 -4 -6  8 -10  1  0  5   7
Данные на выходе: 1  0  5  7  4 -5  3  10 -4 -6  8 -10

Пример №2
Данные на входе:  1  2   3   4   5  6  7  8  9  10  11  12
Данные на выходе: 9  10  11  12  1  2  3  4  5   6   7   8
*/

#define length 12
#define shift 4

void SwapArr(int arr[length], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void input_mass(int arr[length])
{
    printf("Введите %d целых чисел через пробел\n", length);

    for (int i = 0; i < length; i++)
        scanf("%d", &arr[i]);

}

/*Функция для сдвига влево на n=shift символов*/
/*Для сдвига влево меняем местами элементы, начиная с начала массива*/
/*Если дошли до конца, меняем местами последний и первый элемент*/
/*Внешний цикл обеспечивает сдвиг на n символов, внутренний - на 1 символ влево*/
/*void do_Shift_Arr_LEFT(int arr[length])
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(k = 0; k < shift; k++)
    {
        for(i = 0; i < length-1; i++)
        {
            j =  i + 1;

            if (j > (length-1))
                j = i - (length-1) + 1;

            SwapArr(arr, i, j);
        }
    }
}
*/

/*Функция сдвига вправо на n=shift символов*/
/*Для сдвига впрпаво меняем местами ячейки, начиная с конца массива*/
/*Если дошли до начала, меняем местами первый и последний элемент*/
/*Внешний цикл обеспечивает сдвиг на n символов, внутренний - на 1 символ вправо*/
void do_Shift_Arr_RIGHT(int arr[length])
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(k = 0; k < shift; k++)
    {
        for(i = length-1; i > 0; i--)
        {
            j =  i - 1;
            if (j < 0)
                j = length-1;

            SwapArr(arr, i, j);
        }
    }
}

void print_arr(int arr[length])
{
    for (int i = 0; i < length; i++)
        printf("%3d ", arr[i]);

    printf("\n\n");
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int arr[length]={0};

    input_mass(arr);

// очищаем экран
    system("cls");

    printf("\n\nИсходный массив:\n\n");
    print_arr(arr);

//    do_Shift_Arr_LEFT(arr);

    do_Shift_Arr_RIGHT(arr);

    printf("Массив со смещением:\n\n");
    print_arr(arr);

    return 0;
}
