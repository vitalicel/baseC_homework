#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE_DB 262800

struct tsensor
{
    uint8_t day;        //������������� � ������������� ������� �� 1 �� 31
    uint8_t month;      //������������� � ������������� ������� �� 1 �� 12
    uint8_t year;       //������������� � ������� "�������� = 1960 + ���"
    uint8_t hour;       //������������� � ������������� ������� �� 0 �� 24
    uint8_t minutes;    //������������� � ������������� ������� �� 0 �� 59

    int8_t temperature; //������������� � ������������� ������� �� -99 �� 99
};

struct record
{
    unsigned int number;
    struct tsensor data[SIZE_DB];
};

int MonthAvgTemp(struct tsensor *data, unsigned int size, unsigned int month);
int MonthMinTemp(struct tsensor *data, unsigned int size, unsigned int month);
int MonthMaxTemp(struct tsensor *data, unsigned int size, unsigned int month);
int YearhAvgTemp(struct tsensor *data, unsigned int size, unsigned int year);
int YearhMinTemp(struct tsensor *data, unsigned int size, unsigned int year);
int YearhMaxTemp(struct tsensor *data, unsigned int size, unsigned int year);
