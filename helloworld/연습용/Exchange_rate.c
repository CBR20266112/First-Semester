// 환?율
#include <stdio.h>
    
int main(void) {
    double rate; // 원/달러 환율
    double krw; // 원
    double usd; // 달러
    
    printf("환율을 입력하시요: "); 
    scanf("%lf", &rate); 
    printf("원화 얼마요: ");
    scanf("%lf", &krw);

    usd = krw / rate;
    printf("원화 %lf이면 %lf딸라요\n", krw, usd);

    return 0;
}