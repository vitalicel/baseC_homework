#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �7, ������� �� 13.01.2024
������ 6 (D16 ������� 3).

������ ������� ������

�������� ���������� ����������� ������� � ��������� �� ����������
�������� �� ��������� ����������� ����� ������ �������� ������.
int is2pow(int n)

������ �� �����: ���� ����������� �����.
������ �� ������: YES ��� NO

������ �1
������ �� �����: 8
������ �� ������: YES

������ �2
������ �� �����: 7
������ �� ������: NO

*/

int is2pow(int n)
{
    if (n < 2)
        return n;
    if (n % 2 != 0)
        return 0;

    return is2pow(n/2);
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("������� ���� ����������� �����: ");

    int N=0;

    scanf("%d", &N);

    if (N < 0)
    {
        printf("����� %d �� �������� �����������\n\n", N);
        return 1;
    }
    else
    {
        if (is2pow(N) == 1)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
