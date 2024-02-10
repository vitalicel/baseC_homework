#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Домашнее задание №8, занятие от 24.01.2024
Задача 1 (E1 ДЗ 1).

Среднее арифметическое чисел
Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.

Данные на входе: 5 целых ненулевых чисел через пробел
Данные на выходе: Одно число в формате "%.3f"

Пример №1
Данные на входе: 4 15 3 10 14
Данные на выходе: 9.200

Пример №2
Данные на входе: 1 2 3 4 5
Данные на выходе: 3.000
*/

#define length 5

float get_avg(int massive[length])
{
    int sum=0;

    for (int i=0; i<length; i++)
    {
        sum=sum+massive[i];
    }

    return (float)sum/length;
}

void input_mass(int massive[length])
{
    printf("Введите %d целых ненулевых чисел через пробел\n", length);
    for (int i=0; i<length; i++)
    {
        scanf("%d", &massive[i]);
    }
}


int main(void)
{
    setlocale (LC_ALL, "Rus");

    int m[length]={0};

    input_mass(m);

    printf("\nСреднее арифм. элементов массива: %.3f\n\n\n", get_avg(m));

    return 0;
}
