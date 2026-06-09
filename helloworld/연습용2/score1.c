//수업중 배열 기초예제
#include <stdio.h>
int main(void) {
    int i;
    int scores[5];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;

    for(i = 0; i < 5; i++)    //print문 반복해서 간소화.
        printf("scores[%d]=%d\n", i, scores[i]);    //인덱스로 변수 사용이 가능??
    return 0;
}