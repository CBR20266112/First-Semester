// 윤년 판독기 (교과서 발췌)
#include <stdio.h> 
int main(void)
{
    int yoon, x;
    printf("몇년요? :"); scanf("%d", &x);
    yoon = ((x%4 == 0) && (x%100 != 0)) || (x%400 == 0);
    printf("%d년이면.. %d이요.", x, yoon);    //1은 참이고 0은 그짓말이지.

    return 0;
}
