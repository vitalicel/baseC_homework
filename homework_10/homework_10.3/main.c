#include <stdio.h>
#include <locale.h>

/* �������� ������� �10, ������� �� 07.02.2024
������ 3 (G5 �� 2).

�������� a �� b
� ����� .txt ���� ���������� ������ �� ����� 1000 ��������. ���������� �������� ��� ����� "�" ��
����� "b" � ��������, ��� ���������, ��� � ��������. ��������� �������� � .txt.

������ �� �����: ������ �� ��������� � ������� ���������� ����, ������ ���������� � ��������.
������ �� ������: ������ �� ��������� � ������� ���������� ����, ������ ���������� � ��������.

������
������ �� �����: aabbccddABCD
������ �� ������: bbaaccddBACD

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

    printf("%s | %d ��������\n", str1, count1);

    replace_a_A_to_b_B_and_vice_versa(count1, str1);
    fprintf(f_out,"%s", str1);
    fclose(f_out);

    printf("\n\n������:\n\n%s\n\n", str1);

    return 0;
}
