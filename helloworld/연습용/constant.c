// 상수리나무... 자료형 리터럴??
#include <stdio.h>
int main (void) {

    int x = 10; int y = 010; int z = 0x10;
    char X = 010;    //자료형보다 리터럴이 우선?
    int a = 30; int b = 030; int c = 0x30;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("X = %d\n", X);
    printf("a = %d, b= %d, c = %d\t", a, b, c);

    return 0;

}