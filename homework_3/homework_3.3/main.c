#include <stdio.h>
#include <locale.h>


// �������� ������� �3, ������� �� 27.12.2023
// ������ 3. ������ ��� ����� � ����� �� ��������,
// ����� ����������� ������� ���������

int main(void)
{
    int a=0, b=0, c=0;

    setlocale(LC_ALL, "Rus");

    printf("������� ��� ����� ����� ����� ������:\n");
    scanf("%d%d",&a, &b);

    printf("\n�������� ����� �����:\n%d-%d=%d\n", a, b, a-b);

    return 0;
}
