#include <stdio.h>
#include <locale.h>

/* �������� ������� �10, ������� �� 07.02.2024
������ 4 (G7 ����� 2).

���������� ����
� ����� .txt ������� ���������� ������, �� ����� 10 000 ��������. ��������� ���������� ��������
(���������) � ��������� (�������) ���� � ��������� ������. ��������� ������ ���������� �����.
��������� �������� � ���� .txt.

������ �� �����: ������ ��������� �� ���������� ����, ����, �������� � ������ ����������.
������ �� ������: ��� ����� �����. ���������� �������� ���� � ���������� ��������� ����.

������ �1
������ �� �����: aabbAB
������ �� ������: 4 2

������ �2
������ �� �����: HELLO WORLD
������ �� ������: 0 10

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

    printf("������� �� �����:\n%s | %d ��������\n", str1, length_str);

    lowercase_count = get_count_lowercase(length_str, str1);
    uppercase_count = get_count_uppercase(length_str, str1);

    printf("\n| %d �������� | � ������ ��������(��������)\n", lowercase_count);
    printf("\n| %d �������� | � ������� ��������(���������)\n", uppercase_count);

    fprintf(f_out,"%d %d", lowercase_count, uppercase_count);
    fclose(f_out);

    return 0;
}
