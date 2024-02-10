#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �8, ������� �� 24.01.2024
������ 3 (E6 ).

������� �������������� �������
������� ������ �� 12 ��������� � ���������� ������� �������������� ��������� �������.

������ �� �����: 12 ����� ����� ����� ������
������ �� ������: ������� �������������� � ������� "%.2f"

������ �1
������ �� �����: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
������ �� ������: 1.08

������ �2
������ �� �����: 1 2 3 4 5 6 7 8 9 10 11 12
������ �� ������: 6.50

*/

#define length 12

float get_avg(int massive[length])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum = sum + massive[i];
    }

    return (float)sum/length;
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

    printf("\n������� �����. ��������� �������: %.2f\n\n", get_avg(m));

    return 0;
}
