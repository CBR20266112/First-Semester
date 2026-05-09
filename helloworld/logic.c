// 논리 연산자 test.
#include <stdio.h>
int main()
{
    int x, y;

    printf("두 개의 정수를 입력하시요: ");
    scanf("%d %d", &x, &y);

    printf("%d && %d의 결괏값: %d\n", x, y, x&&y);
    printf("%d || %d의 결괏값: %d\n", x, y, x||y);
    printf("!%d의 결괏값: %d", x, !x);

    return 0;
}