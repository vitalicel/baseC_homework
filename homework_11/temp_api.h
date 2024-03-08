#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE_DB 262800

struct tsensor
{
    uint8_t day;        //представление в естесственном формате от 1 до 31
    uint8_t month;      //представление в естесственном формате от 1 до 12
    uint8_t year;       //представление в формате "значение = 1960 + год"
    uint8_t hour;       //представление в естесственном формате от 0 до 24
    uint8_t minutes;    //представление в естесственном формате от 0 до 59

    int8_t temperature; //представление в естесственном формате от -99 до 99
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
