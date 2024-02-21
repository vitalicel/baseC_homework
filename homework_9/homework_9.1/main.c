#include <stdio.h>
#include <locale.h>

/* Домашнее задание №9, занятие от 31.01.2024
Задача 1 (F4 Практ 1).

Цифры в строке

Написать функцию и программу, демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество.
Функция должно строго соответствовать прототипу: void print_digit(char s[])

Данные на входе: Строка из английских букв, пробелов, знаков препинания и цифр
Данные на выходе: Функция должна принимать на вход строку и выводить
на печать по формату: Цифра пробел количество.

Пример
Данные на входе: Hello123 world77.
Данные на выходе: 1 1 2 1 3 1 7 2

*/

#define size_buffer 100


int input(char s[])
{
    int i = 0;
    char c = 0;

    while ( (c=getchar()) != '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;
}

int is_digit(char c)
{
    return ((c >= '0') && (c <= '9'));
}

void print_digit(char s[])
{
    int nums[10] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (is_digit(s[i]))
            nums[s[i] - '0']++;
    }

    for (int j = 0; j < 10; j++)
    {
        if (nums[j] > 0)
            printf("%d %d ", j, nums[j]);
    }

}

int main(void)
{
    setlocale (LC_ALL, "Rus");

    printf("Введите строку из англ. букв, пробелов, цифр, знаков. В конце - ENTER: \n");

    char s[size_buffer]={0};

    int current_buffer = input(s);

    if (current_buffer != 0)
        printf("\nВведено %d знаков(символов)\n", current_buffer);
    else
        printf("Какая-то ошибка :(");

    print_digit(s);

    printf("\n");

    return 0;
}
