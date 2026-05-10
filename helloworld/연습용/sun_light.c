// 태양빛 도달 시간 계산 (교과서 발췌)
#include <stdio.h>
int main(void) 
{
    double light_speed = 300000;    //빛의 속도(km/sec)
    double distance = 149600000;    //빛과 지구 사이의 거리

    double time;
    time = distance / light_speed;
    printf("빛의 속도는 %lfkm/s\n", light_speed);
    printf("태양과 지구의 거리는 %lfkm\n", distance);
    printf("태양의 빛이 지구에 도달하기까지 %lf초\n", time);
    int minute;
    minute = time / 60;
    printf("도전문제에선 분단위로 출력하라네요?: %d", minute);

    return 0;
}