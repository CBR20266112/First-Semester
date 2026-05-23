// 피라미드형 바둑돌 개수 구하기 (REFERNCE: https://github.com/VisualStudy/MathForComputer/blob/a92cfd72d613623061fa2ef7b5cbf94b9e20788a/README.md)
#include <stdio.h>
int main(void) {

    printf("바둑돌 세로로 몇 개?"); int n, b, i;
    scanf("%d", &n); 
    for(i = 1; i <= n; i++) {
        for(b = 0; b < i; b++) {
        printf("*");
        printf("\n");
        }
    }

    return 0;
}
