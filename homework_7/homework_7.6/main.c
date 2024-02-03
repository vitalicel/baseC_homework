#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Домашнее задание №7, занятие от 13.01.2024
Задача 6 (D16 Практик 3).

Точная степень двойки

Написать логическую рекурсивную функцию и используя ее определить
является ли введенное натуральное число точной степенью двойки.
int is2pow(int n)

Данные на входе: Одно натуральное число.
Данные на выходе: YES или NO

Пример №1
Данные на входе: 8
Данные на выходе: YES

Пример №2
Данные на входе: 7
Данные на выходе: NO

*/

int is2pow(int n)
{
    if (n < 2)
        return n;
    if (n % 2 != 0)
        return 0;

    return is2pow(n/2);
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("Введите одно натуральное число: ");

    int N=0;

    scanf("%d", &N);

    if (N < 0)
    {
        printf("число %d не является натуральным\n\n", N);
        return 1;
    }
    else
    {
        if (is2pow(N) == 1)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
