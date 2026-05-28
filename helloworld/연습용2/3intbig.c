//  3개의 정수값 입력, 그 중 최대값 출력 프로그램 작성.
#include <stdio.h>
int main(void) {
    int x, y, z;
    printf("정수 3개를 입력하시요.: ");
    scanf("%d %d %d", &x, &y, &z);
    int big = (x > y) ? x : y;
    big = (big > z) ? big : z;

    printf("%d가 제일 크네", big);

    return 0;
}