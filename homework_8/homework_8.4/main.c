#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �8, ������� �� 24.01.2024
������ 4 (E7 ������� 2 ).

�������� ���������
������� ������ �� 10 ��������� � ��������� �������� �������� ��� 1-�� � 2-�� ������� �������.
���������� �������� ��������� ������ � ���������� ��� ����� ������.

������ �� �����: 10 ����� ��������� ������� ����� ������.
������ �� ������: 10 ����� ��������� ������� ����� ������.

������ �1
������ �� �����:    4  -5  3  10  -4  -6  8  -10  1   0
������ �� ������:  -4  10  3  -5   4   0  1  -10  8  -6

������ �2
������ �� �����:   1  2  3  4  5   6  7  8  9  10
������ �� ������:  5  4  3  2  1  10  9  8  7   6

*/

#define length 10

void SwapArr(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void input_mass(int arr[length])
{
    printf("������� %d ����� ����� ����� ������\n", length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void doReverseArr(int arr[length])
{
    for(int j = 0; j < length/4; j++)
    {
       SwapArr(arr, j, length/2 - 1 - j);
    }
    for(int k = 0; k <= length/4; k++)
    {
       SwapArr(arr, length/2 + k, length - 1 - k);
    }
}

void print_arr(int arr[length])
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int arr[length]={0};

    input_mass(arr);
    doReverseArr(arr);
    print_arr(arr);

    return 0;
}
