#include <stdio.h>
#include <locale.h>

/* �������� ������� �9, ������� �� 31.01.2024
������ 6 (F19).

������ ��������
�������� ������� � ���������, ��������������� ������ ������ �������.
���������� ���������� ������������� ��������� ���������� �������, ����������� ��
�������� ������� �������������� ���� ��������� ������� ���������. ����������� �������
������� �������������� ������� ���������.

������ �� �����: 5 ����� �� 5 ����� ����� ����� ������
������ �� ������: ���� ����� �����

������
������ �� �����: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
������ �� ������: 10

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

    printf("������� �������� ������� %d�%d: ", size_a, size_b);
    input_array(size_a, size_b, arr);

    printf("���� �������: %d\n", find__primary_trace(size_a, size_b, arr));
    printf("C���. �����. ��-�� ��.���������: %d\n", avg_of_sum_p_trace(size_a, size_b, arr));
    printf("���.��-��, ������� ��� ����. �����. ��-�� ��.���������: %d\n", get_count_greater_then_avg(size_a, size_b, arr));

    return 0;
}
