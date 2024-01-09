#include <stdio.h>
#include <locale.h>

// Домашнее задание №5, занятие от 06.01.2024
// Задача 5 (B8).
// Ровно одна цифра 9. Ввести целое число и определить,
// верно ли, что в нём ровно одна цифра «9».
//
// Данные на входе: Одно целое число
// Данные на выходе: Одно слово: YES или NO
//
// Пример №1
// Данные на входе: 193
// Данные на выходе: YES
//
// Пример №2
// Данные на входе: 1994
// Данные на выходе: NO

int main(void)
{
    unsigned int num=0, mod=0, rep_count=0;

    setlocale(LC_ALL, "Rus");

    printf("Введите целое число: ");
    scanf("%d",&num);

    while (num!=0)
    {
        mod=num%10;

        if (mod==9) rep_count++;

        num=num/10;
    }

    if (rep_count==1) printf("\n ~Yes~ \n\n");
    else printf("\n ~No~ \n\n");

    return 0;
}
