#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "temp_api.h"

/* �������� ������� �11, ������� �� 14.02.2024

1. ������� ������ �� ������������ ���� ������ ��� �������� �����������.

2. ��������� ����:
    dddd        - ���      4 �����
    mm          - �����    2 �������
    dd          - ����     2 �����
    hh          - ����     2 �����
    mm          - ������   2 �����
    temperature -          ����� ����� �� -99 �� 99

3. ������� ��������� (��������) ������� ������ ���������� �� ������� ������:
    �������������� �����������,
    ����������� ����������� � ������� ������,
    ������������ ����������� � ������� ������,
    ������ ���������� �� ���:
        � ������������� �����������
        � ����������� �����������
        � ������������ �����������

4. ��� ��������� ������� ������������ � ���������� ������ ���� ��������
� ��������� ���� temp_api.h

5. ������ ������� - � ���� temp_api.c.

6. ���������� ������ ���������� ��� ������ ������� make

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
�������� ���������� � ������ � ������� 2 �������� ������ ������,
�.�. 2 ������� ������� ��� �������� 2 �����, ������� ����� ����� ���������
� ������������� �������� ������������� �� 1 �� 12.

� ������ ����������� ������� �����, ����������� ����� �������� �� �����
262800 ������� � ����������� = 1 ������ ������ 2 ������ � ������� 365 ����.
������ ����� ����� ����� ~ 1539 �����.
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

*/

int main()
{
    setlocale(LC_ALL, "RUS");

    struct record tsensor_db;
    struct tsensor test;

    printf("������ ��������� 'tsensor_db': %u ���� ~ %u �����\n", sizeof(tsensor_db), sizeof(tsensor_db)/1024);
    printf("������ ��������� 'tsensor': %u ����\n", sizeof(test));

    return 0;
}
