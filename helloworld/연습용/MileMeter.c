// ?????? ????? ????
#include <stdio.h>
int main(void) {
    int mile; float meter;
    printf("몇 마일이요?: ");
    scanf("%d", &mile);
    
    meter = 1609*mile;
    printf("아, %d마일은 %f메다요.", mile, meter);

    return 0;

}