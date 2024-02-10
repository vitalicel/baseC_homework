#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �8, ������� �� 24.01.2024
������ 5 (E10 �� 3)

����������� ����� ������� ������ �� 4
������� ������ �� 12 ��������� � ��������� ����������� ����� ������ �� 4 ��������.

������ �� �����: 12 ����� ����� ����� ������
������ �� ������: 12 ����� ����� ����� ������

������ �1
������ �� �����:  4 -5  3 10 -4 -6  8 -10  1  0  5   7
������ �� ������: 1  0  5  7  4 -5  3  10 -4 -6  8 -10

������ �2
������ �� �����:  1  2   3   4   5  6  7  8  9  10  11  12
������ �� ������: 9  10  11  12  1  2  3  4  5   6   7   8
*/

#define length 12
#define shift 4

void SwapArr(int arr[length], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void input_mass(int arr[length])
{
    printf("������� %d ����� ����� ����� ������\n", length);

    for (int i = 0; i < length; i++)
        scanf("%d", &arr[i]);

}

/*������� ��� ������ ����� �� n=shift ��������*/
/*��� ������ ����� ������ ������� ��������, ������� � ������ �������*/
/*���� ����� �� �����, ������ ������� ��������� � ������ �������*/
/*������� ���� ������������ ����� �� n ��������, ���������� - �� 1 ������ �����*/
/*void do_Shift_Arr_LEFT(int arr[length])
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(k = 0; k < shift; k++)
    {
        for(i = 0; i < length-1; i++)
        {
            j =  i + 1;

            if (j > (length-1))
                j = i - (length-1) + 1;

            SwapArr(arr, i, j);
        }
    }
}
*/

/*������� ������ ������ �� n=shift ��������*/
/*��� ������ ������� ������ ������� ������, ������� � ����� �������*/
/*���� ����� �� ������, ������ ������� ������ � ��������� �������*/
/*������� ���� ������������ ����� �� n ��������, ���������� - �� 1 ������ ������*/
void do_Shift_Arr_RIGHT(int arr[length])
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(k = 0; k < shift; k++)
    {
        for(i = length-1; i > 0; i--)
        {
            j =  i - 1;
            if (j < 0)
                j = length-1;

            SwapArr(arr, i, j);
        }
    }
}

void print_arr(int arr[length])
{
    for (int i = 0; i < length; i++)
        printf("%3d ", arr[i]);

    printf("\n\n");
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int arr[length]={0};

    input_mass(arr);

// ������� �����
    system("cls");

    printf("\n\n�������� ������:\n\n");
    print_arr(arr);

//    do_Shift_Arr_LEFT(arr);

    do_Shift_Arr_RIGHT(arr);

    printf("������ �� ���������:\n\n");
    print_arr(arr);

    return 0;
}
