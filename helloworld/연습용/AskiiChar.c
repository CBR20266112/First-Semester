// 아스키 코드값을 문자로 출력하게 해.
#include <stdio.h>
int main(void)
{
    char a;
    printf("아스키 코드값을 입력하시요.: ");
    scanf("%d", &a);
    printf("문자로 %c입니다.", a);
    
    return 0;
}