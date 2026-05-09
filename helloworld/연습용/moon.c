// 달의 중력이요? 달의 몰락은 아는데......
#include <stdio.h>
int main (void) {
    int kg; float moon;
    printf("몸무게가 어떻게 되세요? :");
    scanf("%d", &kg);
    
    printf("죽어\n\n");
    moon = 0.17*kg;
    printf("저런 너무 화내지 마세요.\n당신도 달에 가면 %.2fkg가 될 수 있답니다.\n\n갈 수만 있다면요.", moon);

    return 0;
}