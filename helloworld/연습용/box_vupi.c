// 상자의 부피를 구하는 프로그램 작성
#include <stdio.h>
int main(void) 
{
    int w, h, d, v;    //부피는영어로볼륨이엇읍니다
    printf("상자의 가로 세로 높이: ");
    scanf("%d %d %d", &w, &h, &d);    //width, height, depth
    v = w*h*d;    //가로세로높이 곱하면 부피래.
    printf("상자의 부피: %d", v);

    return 0;
}
