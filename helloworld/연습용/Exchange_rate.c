// 환?율
#include <stdio.h>
    
int main(void) {
    double rate; // 원/달러 환율
    double usd; // 달러
    int krw; // 원화
    
    printf("환율을 입력하시요: "); 
    scanf("%lf", &rate); 
    printf("원화 얼마요: ");
    scanf("%d", &krw);

    usd = krw / rate;
    printf("원화 %d이면 %lf딸라요.\n", krw, usd);

    return 0;
}