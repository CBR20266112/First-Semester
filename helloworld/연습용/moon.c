// 달의 중력이요? 달의 몰락은 아는데......
#include <stdio.h>
int main (void) {
    float kg; float moon;
    printf("몸무게가 어떻게되세요? :");
    scanf("%f", &kg);
    
    printf("죽어");
    moon = 0.17*kg;
    printf("저런 너무 화내지 마세요. 당신도 달에 가면 %fkg가 될 수 있답니다.", moon);

    return 0;
}