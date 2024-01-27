#include <stdio.h>
#include <locale.h>

/* �������� ������� �6, ������� �� 10.01.2024
������ 6 (C17 ��).

����� ���� ����� ������������
��������� ���������� �������, ������� ����������, ����� ��,
��� � ������ ����� ����� ���� ����� ������������.
int is_happy_number(int n)

������ �� �����: ����� �� ������������� �����
������ �� ������: YES ��� NO

������ �1
������ �� �����: 123
������ �� ������: YES

������ �2
������ �� �����: 528
������ �� ������: NO

*/

int is_happy_number(int a)
{
    int summ = 0;
    int mul = 1;

    for (; a>0 ;a/=10)
    {
        int i = a%10;
        summ=summ+i;
        mul=mul*i;
    }

    printf("����� ����=%d\n",summ);
    printf("������������ ���� �����=%d\n",mul);

    if (summ == mul)
        return 1;
    else
        return 0;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int n;

    printf("������� ���� ����� �����: \n");
    scanf("%d", &n);

    if (is_happy_number(n)==1)
        printf("\nYES\n\n");
    else
        printf("\nNO\n\n");

    return 0;
}
