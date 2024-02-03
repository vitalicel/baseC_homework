#include <stdio.h>
#include <locale.h>
#include <math.h>

/* �������� ������� �7, ������� �� 13.01.2024
������ 7 (D19 �� 6).

������� ��� ����������� ������ 'a'
���� ������ �� ���������� ��������, �������� � ������ ����������.
� ����� ������ ������ �����. ���������� ����������� ����������� �������,
������� ��������� ������ ������ �� ������������ ������ ����� � ����������
����� ����� - ���������� �������� 'a' � ������ ������.
int acounter(void)
��������� ������ ������� ������ ������.

������ �� �����: ������ ��������� �� ���������� ����, �������� � ������ ����������.
� ���� ������ ������ '.'

������ �� ������: ���� ����� �����.

������ �1
������ �� �����: abcd a.
������ �� ������: 2

������ �2
������ �� �����: Hello world.
������ �� ������: 0
*/

int acounter(void)
{
    char c=0;
    static a_count=0;

    c=getchar();

    if (c != '.')
        acounter();
    if (c == 'a')
        a_count++;

    return a_count;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("������� ������ �� ����. ��������, �������� � ������ ����������.\n");
    printf("� ����� ������ - ������ '.' (�����)\n\n");

    printf("����� �������� 'a' � ��������� ������: %d\n\n\n", acounter());

    return 0;
}
