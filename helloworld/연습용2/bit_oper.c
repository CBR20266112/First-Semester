// 비트 연산자
#include <stdio.h>
int main(void) {
    printf("AND: %08X\n", 0X9 & 0XA);    //9 AND 10인거지, 16진수 기준으로.
    printf("OR: %08x\n", 0X9 | 0XA);
    printf("NOT: %08x\n", ~0X9);
    printf("XOR: %08x\n", 0X9 ^ 0XA);
    printf("<<: %08x\n", 0X4 << 1);
    printf(">>: %08x", 0X4 >> 1);

    return 0;
}