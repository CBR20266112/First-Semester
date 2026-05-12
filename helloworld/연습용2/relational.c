// 관계 연산자 테스트용 예제 (교과서 발췌)
#include <stdio.h>
int main(void)
{
    int x, y;
    printf("두 개의 정수 입력하시요.: ");
    scanf("%d %d", &x, &y);

    printf("x == y의 결괏값: %d\n", x==y);
    printf("x != y의 결괏값: %d\n", x!=y);
    printf("x > y의 결괏값: %d\t", x>y);
    printf("x < y의 결괏값: %d\n", x<y);
    printf("x >= y의 결괏값: %d\t", x>=y);
    printf("x <= y의 결괏값: %d", x<=y);

    return 0;
}
