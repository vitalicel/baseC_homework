#include <stdio.h>
#include <locale.h>

/* �������� ������� �7, ������� �� 13.01.2024
������ 5 (D14 �� 4).

��� ��������

���� ������������������ ����� ����� ����� ������, ������������� ������ 0.
�������� ��� �������� ����� �� ���� ������������������, �������� �� �������.

������ �� �����: ������������������ ��������� ����� �����. � ����� ����� 0.
������ �� ������: ��������� ������������������, ����� ������ ����� � ��� �� �������.
����� 0 �� ��������.

������
������ �� �����: 12 13 173 28 19 0
������ �� ������: 13 173 19

*/

void odd_dec(void )
{
    int N=0;

    scanf("%d", &N);

    if (N % 2 != 0)
        printf("%d ", N);

    if (N == 0)
        return;

    odd_dec();

}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("������������������ ��������� ����� �����, � ����� - ����� 0: \n");

    odd_dec();

    return 0;
}