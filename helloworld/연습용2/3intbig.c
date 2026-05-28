//  3개의 정수값 입력, 그 중 최대값 출력 프로그램 작성.
#include <stdio.h>
int main(void) {
    int x, y, z;
    printf("정수 3개를 입력하시요.: ");
    scanf("%d %d %d", &x, &y, &z);
    (x > y) ? (x > z) : int big = z;
    (y > x) ? (z > y) : int big = y;
    (z > y) ? (z > x) : int big = x;

    printf("%d가 제일 크네", big);

    return 0;
}