#include <stdio.h>
#include <locale.h>


// �������� ������� �4, ������� �� 30.12.2023
// ������ 11.
// ���� ������� ������������ a, b, c. ���������� ���������� �� �����
// �����������. ��� ���� ����� ����������� �����������, ����� ����
// ����� ���� ������ ������ ���� ������ ����� ������� �������.
//
// ������ �� �����:
// ��� ����� �����. ������� ������������ a, b, c.
// ������ �� ������: YES ��� NO
//
// ������
// ������ �� �����: 3 2 4
// ������ �� ������: YES

int main(void)
{
    unsigned int a=0, b=0, c=0;

    setlocale(LC_ALL, "Rus");

    printf("������� ��� ����� ����� - ����� ������ ������������: ");
    scanf("%d %d %d",&a, &b, &c);

    if ((a!=0)&&(b!=0)&&(c!=0)&&((a+b>c)&&(a+c>b)&&(b+c>a))) printf("\n\n ��, ����������� ���������� \n\n");
    else printf("\n\n ���, ������������ �� ���������� \n\n");

    return 0;
}
