#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Домашнее задание №8, занятие от 24.01.2024
Задача 3 (E6 ).

Среднее арифметическое массива
Считать массив из 12 элементов и подсчитать среднее арифметическое элементов массива.

Данные на входе: 12 целых чисел через пробел
Данные на выходе: Среднее арифметическое в формате "%.2f"

Пример №1
Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
Данные на выходе: 1.08

Пример №2
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12
Данные на выходе: 6.50

*/

#define length 12

float get_avg(int massive[length])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum = sum + massive[i];
    }

    return (float)sum/length;
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

    printf("\nСреднее арифм. элементов массива: %.2f\n\n", get_avg(m));

    return 0;
}
