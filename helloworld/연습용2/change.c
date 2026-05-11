// 거스름돈 계산하기 (교과서 발췌)
#include <stdio.h>
int main(void) {
    int value, money, coin;
    int coin100, coin500, coin1000, coin5000;
    printf("그래서 얼마어치 샀는데?"); scanf("%d", &value); printf("얼마 냈는데?"); scanf("%d", &money); 

    coin = money - calue;
    printf("거스럼은 %d네. 역시 카드가 좋다.", coin);
    // 나머지 거스름돈 계산을 위해 잔돈에서 나머지 연산자 반복.
    coin5000 = coin/5000; coin = coin%5000;
    coin1000 = coin/1000; coin = coin%1000;
    coin500 = coin/500; coin = coin%500; coin100 = coin/100;
    printf("그러면 5000원권%d, 1000원권은 %d장, 500원따리는 %d, 100원은 %d개, 50원은 "버려"", coin5000, coin1000, coin500, coin100);
    
    return 0;
}