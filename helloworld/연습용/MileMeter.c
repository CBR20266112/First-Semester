// 마일을 미터로 환산?
#include <stdio.h>
int main(void) {
    int mile; float meter;
    printf("마일을 입력하시요: ");
    scanf("%d", &mile);
    
    meter = 1609*mile;
    printf("%f", meter);

    return 0;

}