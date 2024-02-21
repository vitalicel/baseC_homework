#include <stdio.h>
#include <locale.h>

/* Домашнее задание №9, занятие от 31.01.2024
Задача 6 (F19).

Больше среднего
Написать функцию и программу, демонстрирующую работу данной функции.
Определить количество положительных элементов квадратной матрицы, превышающих по
величине среднее арифметическое всех элементов главной диагонали. Реализовать функцию
среднее арифметическое главной диагонали.

Данные на входе: 5 строк по 5 целых чисел через пробел
Данные на выходе: Одно целое число

Пример
Данные на входе: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
Данные на выходе: 10

*/

#define size_a 5
#define size_b 5

void input_array(int a, int b, int arr[a][b])
{
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);
}

int avg_of_sum_p_trace(int a, int b, int arr[a][b])
{
    return find__primary_trace(a, b, arr)/5;
}

int find__primary_trace(int a, int b, int arr[a][b])
{
    int p_trace = 0;

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            if ( i == j )
                p_trace = p_trace + arr[i][j];

    return p_trace;
}

int get_count_greater_then_avg(int a, int b, int arr[a][b])
{
    int count = 0;

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            if (arr[i][j] > avg_of_sum_p_trace(a, b, arr))
                count++;

    return count;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int arr[size_a][size_b] = {0};

    printf("Введите элементы матрицы %dх%d: ", size_a, size_b);
    input_array(size_a, size_b, arr);

    printf("След матрицы: %d\n", find__primary_trace(size_a, size_b, arr));
    printf("Cред. арифм. эл-ов гл.диагонали: %d\n", avg_of_sum_p_trace(size_a, size_b, arr));
    printf("Кол.эл-ов, больших чем сред. арифм. эл-ов гл.диагонали: %d\n", get_count_greater_then_avg(size_a, size_b, arr));

    return 0;
}
