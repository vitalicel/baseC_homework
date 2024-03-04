#include <stdio.h>
#include <locale.h>

/* Домашнее задание №10, занятие от 07.02.2024
Задача 3 (G5 ДЗ 2).

Заменить a на b
В файле .txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на
буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в .txt.

Данные на входе: Строка из маленьких и больших английских букв, знаков препинания и пробелов.
Данные на выходе: Строка из маленьких и больших английских букв, знаков препинания и пробелов.

Пример
Данные на входе: aabbccddABCD
Данные на выходе: bbaaccddBACD

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

void replace_a_A_to_b_B_and_vice_versa(int length, char array[])
{
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] == 'a')
            array[i] = 'b';
        else if (array[i] == 'b')
            array[i] = 'a';

        if (array[i] == 'A')
            array[i] = 'B';
        else if (array[i] == 'B')
            array[i] = 'A';
    }
}


int main(void)
{
    setlocale (LC_ALL, "Rus");

    int count1 = 0;
    int count2 = 0;
    int check2word = 0;

    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    char str1[1000] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    fscanf(f_in, "%s", &str1);
    fclose(f_in);

    count1 = strlen(str1);

    printf("%s | %d символов\n", str1, count1);

    replace_a_A_to_b_B_and_vice_versa(count1, str1);
    fprintf(f_out,"%s", str1);
    fclose(f_out);

    printf("\n\nГотово:\n\n%s\n\n", str1);

    return 0;
}
