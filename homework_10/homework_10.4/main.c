#include <stdio.h>
#include <locale.h>

/* Домашнее задание №10, занятие от 07.02.2024
Задача 4 (G7 Практ 2).

Количество букв
В файле .txt считать символьную строку, не более 10 000 символов. Посчитать количество строчных
(маленьких) и прописных (больших) букв в введенной строке. Учитывать только английские буквы.
Результат записать в файл .txt.

Данные на входе: Строка состоящая из английских букв, цифр, пробелов и знаков препинания.
Данные на выходе: Два целых числа. Количество строчных букв и количество заглавных букв.

Пример №1
Данные на входе: aabbAB
Данные на выходе: 4 2

Пример №2
Данные на входе: HELLO WORLD
Данные на выходе: 0 10

*/

void check_open_input_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("Ошибка, файл не существует или не может быть открыт\n");
    else
        printf("Файл input.txt успешно открыт для чтения...\n");
}

void check_open_output_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("Ошибка, файл не существует или не может быть открыт\n");
    else
        printf("Файл output.txt успешно открыт для записи...\n\n");
}

int get_count_lowercase(int length, char array[])
{
    int lowercase_counter = 0;

    for (int i = 0; i < length; i++)
        if (array[i] >= 'a' && array[i] <= 'z')
            lowercase_counter++;

    return lowercase_counter;
}

int get_count_uppercase(int length, char array[])
{
    int uppercase_counter = 0;

    for (int i = 0; i < length; i++)
        if (array[i] >= 'A' && array[i] <= 'Z')
            uppercase_counter++;

    return uppercase_counter;
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int length_str = 0;
    int lowercase_count = 0;
    int uppercase_count = 0;


    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    char str1[10000] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    fscanf(f_in, "%[^\n]", &str1);
    fclose(f_in);

    length_str = strlen(str1);

    printf("считано из файла:\n%s | %d символов\n", str1, length_str);

    lowercase_count = get_count_lowercase(length_str, str1);
    uppercase_count = get_count_uppercase(length_str, str1);

    printf("\n| %d символов | в нижнем регистре(строчные)\n", lowercase_count);
    printf("\n| %d символов | в верхнем регистре(заглавные)\n", uppercase_count);

    fprintf(f_out,"%d %d", lowercase_count, uppercase_count);
    fclose(f_out);

    return 0;
}
