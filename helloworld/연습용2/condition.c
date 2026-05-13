// 조건 연산자 프로그램
#include <stdio.h>
int main(void)
{
    int x, y;
    printf("정수 2개: ");
    scanf("%d %d", &x, &y);

    printf("더 큰 놈: %d\n", (x>y)?x:y);    //조건 연산자를 이용해 큰 수 찾기.
    printf("더 작은 놈: %d", (x<y)?x:y);    //조건 연산자를 이용해 작은 수 찾기.

    return 0;
}