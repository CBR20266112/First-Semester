// int형 변수 x랑 y값 서로 교환??
#include <stdio.h>
int main(void)
{
    int x = 10, y = 20, z;
    printf("x = %d, y = %d\n", x, y);
    z = x;
    x = y;
    y = z;
    printf("짜잔\n");
    printf("x = %d, y = %d", x, y);

    return 0;
}