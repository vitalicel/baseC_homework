#include <stdio.h>
#include <locale.h>

/* �������� ������� �7, ������� �� 13.01.2024
������ 4 (D11 �� 3).

���������� 1
���� ����������� ����� N. ��������� ���������� �1� � �������� ������ �����.

������ �� �����: ����������� �����
������ �� ������: ����� ����� - ���������� ������ � �������� ������ �����.

������ �1
������ �� �����: 5
������ �� ������: 2

������ �2
������ �� �����: 255
������ �� ������: 8

*/

int dec2bin(int a)
{
    static int count=0;

    if (a > 1)
        dec2bin(a/2);

    printf("%d ", a%2);

    if (a%2 == 1)
        count++;

    return count;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("������� ����������� �����: ");

    int N=0;

    scanf("%d", &N);

    printf("\n");
    printf("\n���������� ������ � �������� �����: %d\n\n", dec2bin(N));

    return 0;
}
