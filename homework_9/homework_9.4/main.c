#include <stdio.h>
#include <locale.h>

/* Домашнее задание №9, занятие от 31.01.2024
Задача 4 (F17).

След матрицы
Написать функцию и программу, демонстрирующую работу данной функции, которая находит
след матрицы в двумерном массиве. Показать пример ее работы на матрице из 5 на 5 элементов.
След матрицы - это сумма элементов на главной диагонали.

Данные на входе: 25 целых чисел через пробел.
Данные на выходе: Одно целое число.

Пример
Данные на входе: 1 1 1 1 1
		 2 2 2 2 2
		 3 3 3 3 3
		 4 4 4 4 4
		 5 5 5 5 5
Данные на выходе: 15

*/

void input_array(int a, int b, int arr[a][b])
{
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);
}

int find__primary_trace(int a, int b, int arr[a][b])
{
    int p_trace = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if ( i == j )
                p_trace = p_trace + arr[i][j];
        }
    }
    return p_trace;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int arr[5][5] = {0};

    printf("Введите элементы матрицы 5х5: ");
    input_array(5, 5, arr);

    printf("\nСлед матрицы: %d\n", find__primary_trace(5, 5, arr));

    return 0;
}
