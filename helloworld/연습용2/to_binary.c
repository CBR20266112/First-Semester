// 십진수를 이진수로 출력하기?
#include <stdio.h>
int main(void) {
    unsigned int x;    //음수 출력은 포기하고 두 배로 긴 양수 출력하기.
    printf("정수를 입력하시요:");
    scanf("%u", &x);    //unsgined정수 출력을 위해 %u 사용.

    unsigned int mask = 1 << 7;    //mask = 10000000 이래.
    printf("이진수: ");

    ((x & mask) == 0) ? printf("0") : printf("1");
    mask = mask >> 1;    //오른쪽으로 1비트 이동?
}