#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �8, ������� �� 24.01.2024

������ 6 (E20 ��*)

����������� �����
����������� ����� � ����� ���, ����� ���������� ������������ �����.
������ �� �����:    ���� ����� �� ������������� �����
������ �� ������:   ����� ��������������� �����

������ �1
������ �� �����:    1229
������ �� ������:   9221

������ �2
������ �� �����:    19
������ �� ������:   91

*/

void doSwapArr(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void doArrSort(int arr[], int size)
{
    int no_swap = 1;
    int i = 0;
    int j = 0;

    for(i = 0; i < size - 1; i++)
    {
        no_swap = 1;

        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                doSwapArr(arr, i, j);
                no_swap = 0;
            }
        }
        if(no_swap != 0)
            break;
    }
}

int getArrIndex(int arr[], int num)
{
    int index = 0;

    for(num; num > 0; num=num/10)
    {
        arr[index] = num % 10;
        index++;
    }
    //printf("\nindex = %d\n", index);
    return index;
}

int arr2dec(int arr[], int index)
{
    int res = 0;
    int i =0;

    for(i = index-1; i >= 0; i--)
    {
        res = res + arr[i];

        if (i > 0)
            res = res * 10;
    }
    //printf("\nres = %d\n", res);
    return res;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    unsigned int dec_res = 0;
    unsigned int num = 0;
    int arr[10] = {0};
    int index = 0;

    printf("������� ����� �����: ");
    scanf("%d", &num);

    index = getArrIndex(arr, num);
    doArrSort(arr, index);
    dec_res = arr2dec(arr, index);

    printf("\n������������ �����, ������������ �� ���� ���������: %d\n\n", dec_res);

    return 0;
}
