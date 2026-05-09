// 다항식이요? 저는 난산증이 있어요 히이읶!!
#include <stdio.h>
int main(void) {
    int x; int y;
    printf("3x^2 + 7x + 11\n 실숫값을 직접 입력하시요.: ");
    scanf("%d", &x);
    y = 3*x*x + 7*x + 11;

    printf("다항식ㅇ르 대신 풀어주셔서 감사합니다,,: %d", y);

    return 0;
}