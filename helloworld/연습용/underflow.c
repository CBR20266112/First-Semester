// 머리가 터질 것 같아요. 물론 안 터지겠지만
#include <stdio.h>

int main(void)
{
    float x = 1.23456e-38;
    float y = 1.23456e-40;
    float z = 1.23456e-46l    //언더플로우????

    printf("x = %e\n", x);
    printf("y = %e\n", y);
    printf("z = %d\n", z);

    return 0;
}