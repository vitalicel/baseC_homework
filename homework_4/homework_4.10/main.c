#include <stdio.h>
#include <locale.h>


// �������� ������� �4, ������� �� 30.12.2023
// ������ 10.
// ������ ����� ������ � ������� �������� ������� ����.
//
// ������ �� �����:
// ����� ����� �� 1 �� 12 - ����� ������.
// ������ �� ������: ����� ���� �� ����������: winter, spring, summer, autumn (����������� switch)

// ������ �1
// ������ �� �����: 4
// ������ �� ������: spring
// ������ �2
// ������ �� �����: 1
// ������ �� ������: winter

int main(void)
{
    unsigned int month=0;

    setlocale(LC_ALL, "Rus");

    printf("������� ����� ����� �� 1 �� 12: ");
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
        default: printf("\n\n �������� ���� \n\n");
    }

    return 0;
}
