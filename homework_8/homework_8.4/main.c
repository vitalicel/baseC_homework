#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Домашнее задание №8, занятие от 24.01.2024
Задача 4 (E7 Практик 2 ).

Инверсия половинок
Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива.
Необходимо изменить считанный массив и напечатать его одним циклом.

Данные на входе: 10 целых элементов массива через пробел.
Данные на выходе: 10 целых элементов массива через пробел.

Пример №1
Данные на входе:    4  -5  3  10  -4  -6  8  -10  1   0
Данные на выходе:  -4  10  3  -5   4   0  1  -10  8  -6

Пример №2
Данные на входе:   1  2  3  4  5   6  7  8  9  10
Данные на выходе:  5  4  3  2  1  10  9  8  7   6

*/

#define length 10

void SwapArr(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void input_mass(int arr[length])
{
    printf("Введите %d целых чисел через пробел\n", length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void doReverseArr(int arr[length])
{
    for(int j = 0; j < length/4; j++)
    {
       SwapArr(arr, j, length/2 - 1 - j);
    }
    for(int k = 0; k <= length/4; k++)
    {
       SwapArr(arr, length/2 + k, length - 1 - k);
    }
}

void print_arr(int arr[length])
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int arr[length]={0};

    input_mass(arr);
    doReverseArr(arr);
    print_arr(arr);

    return 0;
}
