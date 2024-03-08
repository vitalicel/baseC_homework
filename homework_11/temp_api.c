#include "temp_api.h"

int MinTemperatureMonth(struct tsensor *data, unsigned int size, unsigned int month)
{
    int min_value = 0;

    for (int i = 0; i < size; i++)
    {
        min_value = data[0].temperature;

        if (data[i].month == month)
            if (data[i].temperature < min_value)
                min_value = data[i].temperature;
    }

    return min_value;
}

int MaxTemperatureMonth(struct tsensor *data, unsigned int size, unsigned int month)
{
    int max_value = 0;

    for (int i = 0; i < size; i++)
    {
        max_value = data[0].temperature;

        if (data[i].month == month)
            if (data[i].temperature > max_value)
                max_value = data[i].temperature;
    }

    return max_value;
}

int AvgTemperatureMonth(struct tsensor *data, unsigned int size, unsigned int month)
{
    int avg_value = 0;
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (data[i].month == month)
        {
            avg_value = avg_value + data[i].temperature;
            counter++;
        }
    }
    avg_value = avg_value / counter;

    return avg_value;
}

int MinTemperatureYear(struct tsensor *data, unsigned int size, unsigned int year)
{
    int min_value = 0;

    for (int i = 0; i < size; i++)
    {
        min_value = data[0].temperature;

        if ((1960 + data[i].year) == year)
            if (data[i].temperature < min_value)
                min_value = data[i].temperature;
    }

    return min_value;
}

int MaxTempearatureYear(struct tsensor *data, unsigned int size, unsigned int year)
{
    int max_value = 0;

    for (int i = 0; i < size; i++)
    {
        max_value = data[0].temperature;

        if ((1960 + data[i].year) == year)
            if (data[i].temperature > max_value)
                max_value = data[i].temperature;
    }

    return max_value;
}



int AvgTemperatureYear(struct tsensor *data, unsigned int size, unsigned int year)
{
    int avg_value = 0;
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if ((1960 + data[i].year) == year)
        {
            avg_value = avg_value + data[i].temperature;
            counter++;
        }
    }

    avg_value = avg_value / counter;

    return avg_value;
}
