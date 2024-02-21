#include <stdio.h>
#include <locale.h>

/* �������� ������� �9, ������� �� 31.01.2024
������ 1 (F4 ����� 1).

����� � ������

�������� ������� � ���������, ��������������� ������ ������ �������.
������� � ������� ����������� �����, �������� � ������. ����� - ����������.
������� ������ ������ ��������������� ���������: void print_digit(char s[])

������ �� �����: ������ �� ���������� ����, ��������, ������ ���������� � ����
������ �� ������: ������� ������ ��������� �� ���� ������ � ��������
�� ������ �� �������: ����� ������ ����������.

������
������ �� �����: Hello123 world77.
������ �� ������: 1 1 2 1 3 1 7 2

*/

#define size_buffer 100


int input(char s[])
{
    int i = 0;
    char c = 0;

    while ( (c=getchar()) != '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;
}

int is_digit(char c)
{
    return ((c >= '0') && (c <= '9'));
}

void print_digit(char s[])
{
    int nums[10] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (is_digit(s[i]))
            nums[s[i] - '0']++;
    }

    for (int j = 0; j < 10; j++)
    {
        if (nums[j] > 0)
            printf("%d %d ", j, nums[j]);
    }

}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("������� ������ �� ����. ����, ��������, ����, ������. � ����� - ENTER: \n");

    char s[size_buffer]={0};

    int current_buffer = input(s);

    if (current_buffer != 0)
        printf("\n������� %d ������(��������)\n", current_buffer);
    else
        printf("�����-�� ������ :(");

    print_digit(s);

    printf("\n");

    return 0;
}
