// 삼각형 넓이 계산하기
#include <stdio.h>
int main(void) {
    int w; int h; int area;
    printf("삼각형의 높이랑 길이: ");
    scanf("%d %d", &h, &w);

    area = 0.5* h*w;
    printf("삼각형의 넓이요.: %d", area);

    return 0;
}