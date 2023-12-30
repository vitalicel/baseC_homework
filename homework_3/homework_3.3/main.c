#include <stdio.h>
#include <locale.h>


// Домашнее задание №3, занятие от 27.12.2023
// Задача 3. Ввести два числа и найти их разность,
// вывод результатов сделать наглядным

int main(void)
{
    int a=0, b=0, c=0;

    setlocale(LC_ALL, "Rus");

    printf("Введите два целых числа через пробел:\n");
    scanf("%d%d",&a, &b);

    printf("\nРазность чисел равна:\n%d-%d=%d\n", a, b, a-b);

    return 0;
}
