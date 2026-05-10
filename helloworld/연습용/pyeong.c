// 평을 제곱미터로 환산하는 프로그램을 작성하래.
#include <stdio.h>
int main(void)
{
    float pyeong; double m2;    //변수이름에는 특수문자 못쓴다고 교수님이 말해줬잖아 멍청아 나가죽어라그냥
    printf("몇평인데?: "); scanf("%f", &pyeong);
    m2 = 3.3058 * pyeong;
    printf("그러면 대충 %lf평방미터래.", m2);

    return 0;
}