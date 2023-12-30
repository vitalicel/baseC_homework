#include <stdio.h>
#include <locale.h>

int 4you;

int main()  /* Задания с 1 по 3, занятие от 20.12.2023 */
{
    setlocale(LC_ALL, "Rus");
    printf("1. Вывести на экран Привет мир:\n");
    printf("Hello world!\n\n\n");

    printf ("2. Вывести на экран текст лесенкой:\n");
    printf ("Через табуляцию будет так:\n");
    printf("\tLets's\n");
    printf("\t\tgo\n");
    printf("\t\t\tto walk\n\n\n");
    printf ("А через вставку пробелов будет так:\n");
    printf(" Lets's\n");
    printf("     go\n");
    printf("       to walk\n\n\n");


    printf("3. Вывести на экран рисунок из букв:\n\n");
    printf("\t   *\n");
    printf("\t  ***\n");
    printf("\t *****\n");
    printf("\t*******\n");
    printf("\t HH HH\n");
    printf("\t ZZZZZ\n");

    return 0;
}
