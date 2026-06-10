// 피라미드형 바둑돌 개수 구하기 (REFERNCE: https://github.com/VisualStudy/MathForComputer/blob/a92cfd72d613623061fa2ef7b5cbf94b9e20788a/README.md)
#include <stdio.h>
int main(void) {
    int n, b;
    printf("바둑돌 세로 몇 개요?: ");
    scanf("%d", &n);

    b = ((n+1)*n)/2;    //삼각형을 짝지어 사각형으로 만들고 반 쪼갰다 치라고?
    printf("어쨌거나 총 합해서 %d개요.", b);

    return 0;
}