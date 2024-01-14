#include <stdio.h>
#include <locale.h>

/* Домашнее задание №6, занятие от 10.01.2024
Задача 4 (C9 Практ).

Факториал
Составить функцию вычисления N!. Использовать ее при вычислении факториала
int factorial(int n)

Данные на входе: Целое положительное число не больше 20
Данные на выходе: Целое положительное число

Пример №1
Данные на входе: 5
Данные на выходе: 120
*/


int factorial(int n)

{
    unsigned int result=1;

    for (int i=1; i<=n; i++)
       result = result*i;

    return result;
}

int main(void)
{
    setlocale(LC_ALL, "Rus");

    int N=0;

    while (1)
        {
            printf("Введите целое неотрицательные число (от 1 до 20): ");
            scanf(" %d",&N);

            if (N<1 || N>20)
                printf("\nНекорретный ввод.\nВведите число от 1 до 20.\n\n");

            else
                break;
        }

    printf("\nФакториал числа %d равен %d\n\n", N, factorial(N));

    return 0;
}
