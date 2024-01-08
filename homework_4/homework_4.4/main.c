#include <stdio.h>
#include <locale.h>


// Домашнее задание №4, занятие от 30.12.2023
// Задача 4.
// Напечатать сумму максимума и минимума.
//
// Данные на входе: Пять целых чисел через пробел
// Данные на выходе: Одно целое число - сумма максимума и минимума
// Пример:
// Данные на входе: 4 15 9 56 4
// Данные на выходе 60

int main(void)
{
    unsigned int a=0, b=0, c=0, d=0, e=0, max=0, min=0;

    setlocale(LC_ALL, "Rus");

    printf("Введите пять целое положительное трёхзначное число:\n");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);


    max=a;
    min=a;

    if (max<b) max=b;
    else if (min>b) min=b;

    if (max<c) max=c;
    else if (min>c) min=c;

    if (max<d) max=d;
    else if (min>d) min=d;

    if (max<e) max=e;
    else if (min>e) min=e;


    printf("\nСумма минимума (%d) и максимума (%d) равна :%d \n\n", min, max, max+min);

    return 0;
}
