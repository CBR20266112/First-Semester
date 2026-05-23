// 피라미드형 바둑돌 개수 구하기 (REFERNCE: https://github.com/VisualStudy/MathForComputer/blob/a92cfd72d613623061fa2ef7b5cbf94b9e20788a/README.md)
#include <stdio.h>
int main(void) {

    int n, b, i;    //n은 입력값, b는 바둑돌 가로줄 길이, i는 세로줄 길이.
    printf("바둑돌 몇 개 해줘?");
    scanf("%d", &n); 
    for(i = 1; i <= n; i++) {    //바깥쪽 반복문, i는 줄 개수 담당.
        for(b = 0; b < i; b++) {    //i가 한번 늘면 안쪽 반복문에선 b가 늘면서 반복.
            printf("*");    //b 개수만큼 별을 찍고 i 개수를 따라잡으면.
        }    //i랑 b가 같아지기 전에 안쪽 반복문 그만하고 다시 밖으로 나와서.
        printf("\n");    //줄바꿈 한번 해주고 다시 i 늘리기 반복문으로.
    }    //바깥쪽 반복문으로 i가 입력값 n을 따라잡으면 끝.

    return 0;
}
