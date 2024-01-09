#include <stdio.h>
#include <locale.h>

// �������� ������� �5, ������� �� 06.01.2024
// ������ 4 (B6 ���� 5 �������� 2).
// ��� ���������� ����� �����. ������ ����� ����� � ����������,
// ����� ��, ��� � ��� ������ ���� ��� ���������� �����, ������� �����.
//
// ������ �� �����: ���� ����� �����
// ������ �� ������: ������������ �����: YES ��� NO
//
// ������ �1
// ������ �� �����: 1232
// ������ �� ������: NO
// ������ �2
// ������ �� �����: 1224
// ������ �� ������: YES

int main(void)
{
    unsigned int num=0, i=0, j=0, rep_count=0;

    setlocale(LC_ALL, "Rus");

    printf("������� ����� �����: ");
    scanf("%d",&num);

    while (1)
    {
        i=num;
        j=num;
        if (num==0) break;
        if ((i/10)%10==j%10) rep_count++;
        num=num/10;
    }

    if (rep_count!=0) printf("\n ~Yes~ \n\n");
    else printf("\n ~No~ \n\n");

    //printf("\n\n\n ���������� ������������ ������� ���� %d\n\n", rep_count);

    return 0;
}
