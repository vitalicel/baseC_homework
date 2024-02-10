#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �8, ������� �� 24.01.2024
������ 2 (E5 ).

����� ������������� ���������
������� ������ �� 10 ��������� � ���������� ����� ������������� ��������� �������.

������ �� �����: 10 ����� ����� ����� ������
������ �� ������: ���� ����� ����� - ����� ������������� ��������� �������

������ �1
������ �� �����: 4 -5 3 10 -4 -6 8 -10 1 0
������ �� ������: 26

������ �2
������ �� �����: 1 -2 3 -4 5 -6 7 -8 9 0
������ �� ������: 25

*/

#define length 10

int get_nat_sum(int massive[length])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        if (massive[i] > 0)
            sum = sum + massive[i];
    }

    return sum;
}

void input_mass(int massive[length])
{
    printf("������� %d ����� ����� ����� ������\n", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &massive[i]);
    }
}


int main(void)
{
    setlocale (LC_ALL, "Rus");

    int m[length]={0};

    input_mass(m);

    printf("\n����� ������������� ��������� �������: %d\n\n", get_nat_sum(m));

    return 0;
}
