// 아스키 코드값을 문자로 출력하게 해.
#include <stdio.h>
int main(void)
{
    char a = 'a'; int b;
    printf("아스키 코드값을 입력하시요.: ");
    scanf("%d", &b);
    printf("문자로 %c입니다.\n\n", b);
    //아스키코드에 더하기까지 하래.
    printf("아스키 코드 a+1 = %d\t", a+1);
    printf("아스키 코드 a+2 = %d\t", a+2);
    printf("아스키 코드 a+3 = %d", a+3);

    return 0;
}