#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �8, ������� �� 24.01.2024
������ 1 (E1 �� 1).

������� �������������� �����
������ c ���������� ������ �� 5 ���������, ����� ������� �������������� ���� ��������� �������.

������ �� �����: 5 ����� ��������� ����� ����� ������
������ �� ������: ���� ����� � ������� "%.3f"

������ �1
������ �� �����: 4 15 3 10 14
������ �� ������: 9.200

������ �2
������ �� �����: 1 2 3 4 5
������ �� ������: 3.000
*/

#define length 5

float get_avg(int massive[length])
{
    int sum=0;

    for (int i=0; i<length; i++)
    {
        sum=sum+massive[i];
    }

    return (float)sum/length;
}

void input_mass(int massive[length])
{
    printf("������� %d ����� ��������� ����� ����� ������\n", length);
    for (int i=0; i<length; i++)
    {
        scanf("%d", &massive[i]);
    }
}


int main(void)
{
    setlocale (LC_ALL, "Rus");

    int m[length]={0};

    input_mass(m);

    printf("\n������� �����. ��������� �������: %.3f\n\n\n", get_avg(m));

    return 0;
}
