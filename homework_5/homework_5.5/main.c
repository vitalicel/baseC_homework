#include <stdio.h>
#include <locale.h>

// �������� ������� �5, ������� �� 06.01.2024
// ������ 5 (B8).
// ����� ���� ����� 9. ������ ����� ����� � ����������,
// ����� ��, ��� � �� ����� ���� ����� �9�.
//
// ������ �� �����: ���� ����� �����
// ������ �� ������: ���� �����: YES ��� NO
//
// ������ �1
// ������ �� �����: 193
// ������ �� ������: YES
//
// ������ �2
// ������ �� �����: 1994
// ������ �� ������: NO

int main(void)
{
    unsigned int num=0, mod=0, rep_count=0;

    setlocale(LC_ALL, "Rus");

    printf("������� ����� �����: ");
    scanf("%d",&num);

    while (num!=0)
    {
        mod=num%10;

        if (mod==9) rep_count++;

        num=num/10;
    }

    if (rep_count==1) printf("\n ~Yes~ \n\n");
    else printf("\n ~No~ \n\n");

    return 0;
}
