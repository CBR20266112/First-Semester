//두 개의 숫자의 합을 계산 어쩌구2
#include <stdio.h>
int main(void) {

    int x;
    int y;
    int sum;
    printf("두 개의 숫자를 입력하시요: ");
    scanf("%d", &x); scanf("%d", &y);
    sum = x + y;
    printf("x+y=%d", sum);
}