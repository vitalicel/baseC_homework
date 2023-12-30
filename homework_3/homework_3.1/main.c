#include <stdio.h>
#include <locale.h>


// Домашнее задание №3, занятие от 27.12.2023
// Задача 1. Найти сумму трех чисел

int main(void)
{
    int a=0, b=0, c=0;

    setlocale(LC_ALL, "Rus");

    printf("Введите три числа через пробел:\n");
    scanf("%d%d%d",&a, &b, &c);

    printf("\nСумма чисел равна:%d", a+b+c);

    return 0;
}
