#include <stdio.h>
#include <locale.h>

/* Домашнее задание №10, занятие от 07.02.2024
Задача 1 (G3 Практ 1).

Последний номер символа
В файле .txt дана строка из 1000 символов. Показать номера символов, совпадающих с последним
символом строки. Результат записать в файл .txt

Данные на входе: Строка не более 1000 символов
Данные на выходе: Целые числа через пробел - номера символа, который совпадает с последним
символом строки.

Пример
Данные на входе: aabbcdb
Данные на выходе: 2 3

*/

void check_open_input_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("Ошибка, файл не существует или не может быть открыт");
    else
        printf("Файл input.txt успешно открыт для чтения...\n");
}

void check_open_output_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("Ошибка, файл не существует или не может быть открыт");
    else
        printf("Файл output.txt успешно открыт для записи...\n\n");
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int i = 0;
    int count = 0;

    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    char str[1000] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    fscanf(f_in, "%s", &str);
    fclose(f_in);

    count = strlen(str);

    fprintf(f_out, "Счёт номер символа идёт от 1.\n\n");

    for (i = 0; i < count-1; i++)
        if (str[count-1] == str[i])
            fprintf(f_out, "%d ", i+1);

    fclose(f_out);

    return 0;
}
