#include <stdio.h>
#include <locale.h>

/* �������� ������� �7, ������� �� 13.01.2024
������ 3 (D8 �� 2).

�� A �� B
��������� ����������� �������, �������� ��� ����� �� A �� B ������������,
� ������� �����������, ���� A < B, ��� � ������� �������� � ��������� ������.

������ �� �����: ��� ����� ����� ����� ������.
������ �� ������: ������������������ ����� �����.

������ �1
������ �� �����: 5 2
������ �� ������: 5 4 3 2

������ �2
������ �� �����: 2 7
������ �� ������: 2 3 4 5 6 7

*/

void print_AB(int a, int b)
{
    if (b >= a)
    {
        printf("%d ", a);
        print_AB(a+1,b);
    }
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("������� ��� ����� ����� ����� ������: ");

    int n1=0, n2=0;

    scanf("%d %d", &n1, &n2);

    printf("\n\n");

    if (n1 > n2)
        print_AB(n2, n1);
    else
        print_AB(n1, n2);

    return 0;
}
