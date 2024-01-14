#include <stdio.h>
#include <locale.h>

/* �������� ������� �6, ������� �� 10.01.2024
������ 4 (C9 �����).

���������
��������� ������� ���������� N!. ������������ �� ��� ���������� ����������
int factorial(int n)

������ �� �����: ����� ������������� ����� �� ������ 20
������ �� ������: ����� ������������� �����

������ �1
������ �� �����: 5
������ �� ������: 120
*/


int factorial(int n)

{
    unsigned int result=1;

    for (int i=1; i<=n; i++)
       result = result*i;

    return result;
}

int main(void)
{
    setlocale(LC_ALL, "Rus");

    int N=0;

    while (1)
        {
            printf("������� ����� ��������������� ����� (�� 1 �� 20): ");
            scanf(" %d",&N);

            if (N<1 || N>20)
                printf("\n����������� ����.\n������� ����� �� 1 �� 20.\n\n");

            else
                break;
        }

    printf("\n��������� ����� %d ����� %d\n\n", N, factorial(N));

    return 0;
}
