#include <stdio.h>
#include <locale.h>

/* �������� ������� �10, ������� �� 07.02.2024
������ 2 (G4 �� 1).

�� ������ ����
� ����� .txt ���� ��� ����� �� ����� 100 �������� ������, ����������� ����� ��������. �������
������ �� ������� ����, ������� ����������� � ����� ������ ������ ���� ���. ����������� �� �����
������ � ���� .txt � ������������������ �������.

������ �� �����: ��� ����� �� ��������� ���������� ���� ����� ������. ������ ������� �����
�� ������ 100 ��������.
������ �� ������: ��������� ���������� ����� ����� ������.

������ �1
������ �� �����: hello world
������ �� ������: o
������ �� �����: aabcd bcef
������ �� ������: b c

*/

void check_open_input_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("������, ���� �� ���������� ��� �� ����� ���� ������\n");
    else
        printf("���� input.txt ������� ������ ��� ������...\n");
}

void check_open_output_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("������, ���� �� ���������� ��� �� ����� ���� ������\n");
    else
        printf("���� output.txt ������� ������ ��� ������...\n\n");
}

int check_unique_letter(int length, char array[], char letter)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (letter == array[i])
            counter++;
    }

    return counter;
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
    char str1[100] = {0};
    char str2[100] = {0};

    int freq_str[26] = {0};

    f_in = fopen(name_in, "r");
    check_open_input_file(f_in);

    f_out = fopen(name_out, "w");
    check_open_output_file(f_out);

    check2word = fscanf(f_in, "%[a-z] %[a-z]", &str1, &str2);

    if (check2word < 2)
    {
        fclose(f_in);
        fclose(f_out);
        printf("������� ������ �� ���������.\n");
        return -1;
    }

    fclose(f_in);

    count1 = strlen(str1);
    count2 = strlen(str2);

    printf("%s | %d ��������\n", str1, count1);
    printf("%s | %d ��������\n\n", str2, count2);

    for (int i = 0; i < count1; i++) //���������� ����� ������� �����
        if (check_unique_letter(count1, str1, str1[i]) == 1) //���� i-����� ������������ � �����1
            if (check_unique_letter(count2, str2, str1[i]) == 1) //��������� � ���������� � �����2, ���� ������������ � �����2
            {
                printf("%c ", str1[i]); //������� ����� �� �����
                fprintf(f_out,"%c ",str1[i]);
            }

    printf("\n");

    fclose(f_out);

    return 0;
}
