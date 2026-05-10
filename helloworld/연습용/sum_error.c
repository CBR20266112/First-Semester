// 변수를 사용할 때 가장 주의할 점은 초기화되지 않은 값을 사용하는 것이다. (라고 교과서가 말했습니다.)
#include <stdio.h>
int main(void) {
    int x, y, z, sum;
    sum = 0;    //이거 안 해주니까 값이 이상하네
    printf("세개의정수 입력하시요.: ");
    scanf("%d %d %d", &x, &y, &z);
    sum += x;
    sum += y;
    sum += z;
    printf("3개 정수의 합이요.: %d", sum);

    return 0;
}