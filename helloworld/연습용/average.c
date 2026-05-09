// 평균값 구하기
#include <stdio.h>
int main(void) {
    int num1, num2, num3, num4;
    double sum, average;

    printf("4개의 실수를 입력하시요: ");
    scanf("%d %d %d %d", num1, num2, num3, num4);

    sum = num1 + num2 + num3 + num4;
    average = sum / 4;
    printf("합: %d\n", sum);
    printf("평균: %lf\n", average);

    return 0;
}