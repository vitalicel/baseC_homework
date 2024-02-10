#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Домашнее задание №8, занятие от 24.01.2024
Задача 2 (E5 ).

Сумма положительных элементов
Считать массив из 10 элементов и подсчитать сумму положительных элементов массива.

Данные на входе: 10 целых чисел через пробел
Данные на выходе: Одно целое число - сумма положительных элементов массива

Пример №1
Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0
Данные на выходе: 26

Пример №2
Данные на входе: 1 -2 3 -4 5 -6 7 -8 9 0
Данные на выходе: 25

*/

#define length 10

int get_nat_sum(int massive[length])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        if (massive[i] > 0)
            sum = sum + massive[i];
    }

    return sum;
}

void input_mass(int massive[length])
{
    printf("Введите %d целых чисел через пробел\n", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &massive[i]);
    }
}


int main(void)
{
    setlocale (LC_ALL, "Rus");

    int m[length]={0};

    input_mass(m);

    printf("\nСумма положительных элементов массива: %d\n\n", get_nat_sum(m));

    return 0;
}
