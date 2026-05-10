// 오버플로우 (교과서 발췌)
#include <stdio.h>
#include <limits.h>    //정수형의 한계를 알려주는 헤더파일?

int main(void)
{
    short s_money = SHRT_MAX;    //최댓값으로 초기화 (32767)
    unsigned short u_money = UNSHRT_MAX; //최댓값(65535)

    s_money = s_money + 1;    //+1이 오버플로우 야기한다는??
    printf("s_money = %d\n", s_money);

    u_money = u_money + 1;    //아마 이것도..
    printf("u_money = %d\n", u_money);

    return 0;
}