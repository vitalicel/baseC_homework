#include <stdio.h>
#include <locale.h>


// �������� ������� �3, ������� �� 27.12.2023
// ������ 1. ����� ����� ���� �����

int main(void)
{
    int a=0, b=0, c=0;

    setlocale(LC_ALL, "Rus");

    printf("������� ��� ����� ����� ������:\n");
    scanf("%d%d%d",&a, &b, &c);

    printf("\n����� ����� �����:%d", a+b+c);

    return 0;
}
