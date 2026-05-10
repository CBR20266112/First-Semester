// 특수 문자열 예제 (교과서 발췌)
#include <stdio.h>
int main(void) 
{
    int id, pass;

    printf("아이디와 패스워드 숫자 4개로 쳐:\n");
    printf("ID:____\b\b\b\b");    //화면의 커서를 뒤로 움직??
    scanf("%d", &id);
    printf("PASSWORD:____\b\b\b\b");    //이는 제어 문자라고?
    scanf("%d", &pass);
    printf("입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다?\n", id, pass);    //역슬래시 교수님말씀

    return 0;
}