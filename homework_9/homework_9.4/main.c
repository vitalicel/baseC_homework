#include <stdio.h>
#include <locale.h>

/* �������� ������� �9, ������� �� 31.01.2024
������ 4 (F17).

���� �������
�������� ������� � ���������, ��������������� ������ ������ �������, ������� �������
���� ������� � ��������� �������. �������� ������ �� ������ �� ������� �� 5 �� 5 ���������.
���� ������� - ��� ����� ��������� �� ������� ���������.

������ �� �����: 25 ����� ����� ����� ������.
������ �� ������: ���� ����� �����.

������
������ �� �����: 1 1 1 1 1
				 2 2 2 2 2
				 3 3 3 3 3
				 4 4 4 4 4
				 5 5 5 5 5
������ �� ������: 15

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

    printf("������� �������� ������� 5�5: ");
    input_array(5, 5, arr);

    printf("\n���� �������: %d\n", find__primary_trace(5, 5, arr));

    return 0;
}
