#include <stdio.h>
#include <stdlib.h>
/*����������*/
#include <math.h>
#include <locale.h>
#include "month.h"
#include "month.c"
int main()
{
    char *locale = setlocale(LC_ALL, "");
    int q,n,F,year = 0;
    float qnow;
    int name_month;
    int monthSelect,days;

    printf("\ncheck commit\n");
    printf("������� ���������� ��������� q = ");
    scanf("%d", &q);
    printf("������� ������� ��������� F = ");
    scanf("%d", &F);
    printf("������� �� ������� ��� ���������� n = ");
    scanf("%d", &n);
    if(q>1000000) printf("�� ����� ����������� ���������� ���������");
    if(F>100) printf("�� ����� ����������� ������� ���������");
    if(n>10) printf("�� ����� ����������� �� ������� ��� ����������");
    printf("��������� ������� ���������", q, F, n);
    qnow = q;
    printf("\n������� ����� ������ � ������� ������ ��������� ���������� ����: ", monthSelect);
    scanf("%d", &monthSelect);
    name_month = month (monthSelect,"NULL",&days);

    while(qnow<=q*n)
    {
        qnow = qnow+(qnow*1/F);
        year++;
        printf("\n���: %d ���� ���������: %.0f", year, qnow);
    }


    printf("\n\nCurrent Month: %s", name_month);
    printf("\nthe day in month is %d\n", days);


    printf("\n����� %d ��� � %d ��� ���������� ���������", year, n);
}
