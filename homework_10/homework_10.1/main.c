#include <stdio.h>
#include <locale.h>

/* �������� ������� �10, ������� �� 07.02.2024
������ 1 (G3 ����� 1).

��������� ����� �������
� ����� .txt ���� ������ �� 1000 ��������. �������� ������ ��������, ����������� � ���������
�������� ������. ��������� �������� � ���� .txt

������ �� �����: ������ �� ����� 1000 ��������
������ �� ������: ����� ����� ����� ������ - ������ �������, ������� ��������� � ���������
�������� ������.

������
������ �� �����: aabbcdb
������ �� ������: 2 3

*/

void check_open_input_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("������, ���� �� ���������� ��� �� ����� ���� ������");
    else
        printf("���� input.txt ������� ������ ��� ������...\n");
}

void check_open_output_file(FILE *file_ptr)
{
    if (file_ptr == NULL)
        printf("������, ���� �� ���������� ��� �� ����� ���� ������");
    else
        printf("���� output.txt ������� ������ ��� ������...\n\n");
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

    fprintf(f_out, "���� ����� ������� ��� �� 1.\n\n");

    for (i = 0; i < count-1; i++)
        if (str[count-1] == str[i])
            fprintf(f_out, "%d ", i+1);

    fclose(f_out);

    return 0;
}
