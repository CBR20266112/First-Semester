// 증감 연산자 (교과서 발췌)
#include <stdio.h>
int main(void)
{
    int x= 10, y = 10;

    printf("x=%d\t", x);
    printf("++x의 값=%d\t", ++x);    //먼저 증가, 수식에 사용
    printf("x=%d\n", x);

    printf("y=%d\t", y);
    printf("y++의 값=%d\t", y++)    //먼저 사용, 나중에 증가
    printf("y=%d\n", y);
    
    return 0;
}