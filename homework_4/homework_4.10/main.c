#include <stdio.h>
#include <locale.h>


// Домашнее задание №4, занятие от 30.12.2023
// Задача 10.
// Ввести номер месяца и вывести название времени года.
//
// Данные на входе:
// Целое число от 1 до 12 - номер месяца.
// Данные на выходе: Время года на английском: winter, spring, summer, autumn (используйте switch)

// Пример №1
// Данные на входе: 4
// Данные на выходе: spring
// Пример №2
// Данные на входе: 1
// Данные на выходе: winter

int main(void)
{
    unsigned int month=0;

    setlocale(LC_ALL, "Rus");

    printf("Введите целое число от 1 до 12: ");
    scanf("%d",&month);

    switch (month)
    {
        case 12:
        case 1:
        case 2: printf("\n\n Winter \n\n"); break;
        case 3:
        case 4:
        case 5: printf("\n\n Spring \n\n"); break;
        case 6:
        case 7:
        case 8: printf("\n\n Summer \n\n"); break;
        case 9:
        case 10:
        case 11: printf("\n\n Autumn \n\n"); break;
        default: printf("\n\n Неверный ввод \n\n");
    }

    return 0;
}
