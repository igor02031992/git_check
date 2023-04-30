#include <stdio.h>
#include <stdlib.h>
/*библиотеки*/
#include <math.h>
#include <locale.h>
int main()
{
    char *locale = setlocale(LC_ALL, "");
    int q,n,F,year = 0;
    float qnow;

    int days = 31;

    printf("check commit");
    printf("Введите количество населения q = ");
    scanf("%d", &q);
    printf("Введите прирост населения F = ");
    scanf("%d", &F);
    printf("Введите во сколько раз увеличится n = ");
    scanf("%d", &n);
    if(q>1000000) printf("Вы ввели неправильно количество населения");
    if(F>100) printf("Вы ввели неправильно прирост населения");
    if(n>10) printf("Вы ввели неправильно во сколько раз увеличится");
    printf("Население Прирост Увлечение", q, F, n);
    qnow = q;
    while(qnow<=q*n)
    {
        qnow = qnow+(qnow*1/F);
        year++;
        printf("\nГод: %d Рост населения: %.0f", year, qnow);
    }
  
     
    if(month =="August"){
        days = 31;
    }
    printf("\nthe day in month is %d\n" days);


    printf("\nЧерез %d лет в %d раз увеличится население", year, n);
}
