#include <stdio.h>
#include <locale.h>

/* Домашнее задание №10, занятие от 07.02.2024
Задача 6 (G9 ДЗ 4).

Удалить повторяющиеся символы
В файле .txt строка из меленьких и больших английских букв, знаков препинания и пробелов.
Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в файл .txt.

Данные на входе: Строка из меленьких и больших английских букв, знаков препинания и
пробелов. Размер строки не более 1000 сивмолов.
Данные на выходе: Строка из меленьких и больших английских букв.

Пример
Данные на входе: abc cde def
Данные на выходе: abcdef

*/

/*
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
Так как условия задачи не полностью сформулированы, а именно - нет указаний
что делать с повторяющимися буквами в верхнем и нижнем регистре, то
предполагается, что требуется удалить только повторяющиеся строчные ИЛИ
повторяющиеся заглавные буквы.
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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

void doPrintArray(int length, char array[])
{
    for (int i = 0; i < length; i++)
        printf("%c", array[i]);
}

int doCheck_Letter(char Letter)
{
    return ((Letter >= 'a' && Letter <= 'z') || (Letter >= 'A' && Letter <= 'Z'));
}

void deleteDupLetterAndNonLetter(int length, char array[], char Letter)
{
    int flag = 0;

    for (int i = 0; i < length; i++)
    {
        if (doCheck_Letter(array[i]))
        {
            if (array[i] == Letter)
            {
                flag++;

                if (flag > 1)
                    array[i] = NULL;
            }
        }
        else
            array[i] = NULL;
    }
}

void doSomething(int length, char array[])
{
    int count_duplicate = 0;

    for (int i = 0; i < length; i++)
    {
        //перебираем буквы и затираем дубли NULLами
        deleteDupLetterAndNonLetter(length, array, array[i]);
    }

    printf("\nРезультат:\n");

    for (int i = 0; i < length; i++) //выводим на экран результат
        if (doCheck_Letter(array[i]))
            printf("%c", array[i]);

    printf("\n");
}

void doPrintArray_to_out_file(int length, char array[], FILE *f_out)
{
    for (int i = 0; i < length; i++)
        if (doCheck_Letter(array[i]))
            fprintf(f_out, "%c", array[i]);

    fclose(f_out);
}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    int length_str = 0;

    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    char str1[1000] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    fscanf(f_in, "%[^\n]", &str1);
    fclose(f_in);

    length_str = strlen(str1);
    printf("Считано из файла:\n''%s'' | %d символов\n", str1, length_str);

    doSomething(length_str, str1);
    doPrintArray_to_out_file(length_str, str1, f_out); //файл закрывается внутри функции

    printf("\n");

    return 0;
}
