#include <stdio.h>
#include <locale.h>

/* Домашнее задание №6, занятие от 10.01.2024
Задача 6 (C17 ДЗ).

Сумма цифр равна произведению
Составить логическую функцию, которая определяет, верно ли,
что в данном числе сумма цифр равна произведению.
int is_happy_number(int n)

Данные на входе: Целое не отрицательное число
Данные на выходе: YES или NO

Пример №1
Данные на входе: 123
Данные на выходе: YES

Пример №2
Данные на входе: 528
Данные на выходе: NO

*/

int is_happy_number(int a)
{
    int summ = 0;
    int mul = 1;

    for (; a>0 ;a/=10)
    {
        int i = a%10;
        summ=summ+i;
        mul=mul*i;
    }

    printf("Сумма цифр=%d\n",summ);
    printf("Произведение цифр равно=%d\n",mul);

    if (summ == mul)
        return 1;
    else
        return 0;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int n;

    printf("Введите одно целое число: \n");
    scanf("%d", &n);

    if (is_happy_number(n)==1)
        printf("\nYES\n\n");
    else
        printf("\nNO\n\n");

    return 0;
}
