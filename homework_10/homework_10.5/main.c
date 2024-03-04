#include <stdio.h>
#include <locale.h>

/* �������� ������� �10, ������� �� 07.02.2024
������ 5 (G8 �� 3).

����� � ������
� ����� .txt ���� ������, �� ����� 1000 ��������, ���������� �����, ����� ����� � ���� �������.
��������� ��� �����, ������� ����������� � ������, ��������� � ��������� ������������� ������.
��������, ���� ���� ������ "data 48 call 9 read13 blank0a", �� � ������� ����� 48, 9, 13 � 0. �������
������ �� ����������� � ���� .txt.

������ �� �����: ������ �� ���������� ����, ���� � ������ ����������
������ �� ������: ������������������ ����� ����� ��������������� �� �����������

������
������ �� �����: data 48 call 9 read13 blank0a
������ �� ������: 0 9 13 48

*/

void check_open_input_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("������, ���� �� ���������� ��� �� ����� ���� ������\n");
    else
        printf("���� input.txt ������� ������ ��� ������...\n");
}

void check_open_output_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("������, ���� �� ���������� ��� �� ����� ���� ������\n");
    else
        printf("���� output.txt ������� ������ ��� ������...\n\n");
}

void doSwapArr(int i, int j, int arr[])
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void doArrSort(int size, int arr[])
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
                doSwapArr(i, j, arr);
                no_swap = 0;
            }
        }
        if(no_swap != 0)
            break;
    }
}

int doFindNumbers(int length, char array[], int decNums[])
{
    int num = 0;
    int k = 0;
    int count_nums = 0;

    for (int i = 0; i < length; i++)
    {
        int negative = 0;

        if (array[i] >= '0' && array[i] <= '9')
        {
            if(array[i-1] == '-')
                negative = 1; // flag

            num = array[i] - '0';
            int j = i+1;

            while (array[j] >= '0' && array[j] <= '9')
            {
                num = num*10 + (array[j] - '0');
                j++;
            }

            if (negative)
                decNums[k] = num*(-1);
            else
                decNums[k] = num;

            count_nums++;
            k++;

            i = j; //������� ������ ������ �� ����� �����
        }
    }

    return count_nums;
}

void doPrint_intArray(int length, int array[])
{
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
}

void doPrint_intArray_to_out_file(int length, int array[], FILE *f_out)
{
    for (int i = 0; i < length; i++)
        fprintf(f_out, "%d ", array[i]);

    fclose(f_out);
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int length_str = 0;
    int nums_count = 0;

    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    char str1[10000] = {0};

    int decArrayNums[100] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    fscanf(f_in, "%[^\n]", &str1);
    fclose(f_in);

    length_str = strlen(str1);
    printf("������� �� �����:\n''%s'' | %d ��������\n", str1, length_str);

    nums_count = doFindNumbers(length_str, str1, decArrayNums);

    printf("\n������ ��������� �����(%d):\n", nums_count);
    doPrint_intArray(nums_count, decArrayNums);

    printf("\n");

    printf("\n��������� ������ �����(%d) �� �����������:\n", nums_count);
    doArrSort(nums_count, decArrayNums);
    doPrint_intArray(nums_count, decArrayNums);

    doPrint_intArray_to_out_file(nums_count, decArrayNums, f_out); //���� ����������� ������ �������

    printf("\n");

    return 0;
}
