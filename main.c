#include <stdio.h>
#include <stdlib.h>
/*����������*/
#include <math.h>
#include <locale.h>
int main()
{
    char *locale = setlocale(LC_ALL, "");
    int q,n,F,year = 0;
    float qnow;
    printf("check commit");
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
  
			
    while(qnow<=q*n)
    {
        qnow = qnow+(qnow*1/F);
        year++;
        printf("\n���: %d ���� ���������: %.0f", year, qnow);
    }
    printf("\n����� %d ��� � %d ��� ���������� ���������", year, n);
}
