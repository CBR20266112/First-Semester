// 실수 하나 받아서 소수점 표기, 지수 표기 둘 다 하래.
#include <stdio.h>
int main(void) { float d;
    printf("mistake: "); scanf("%f", &d);
    printf("mistake:%f\tJisoo:%e\n", d, d); 
    //float형으로 선언했으면 정수형%d는 못쓴대
    return 0; }
    //16진수로 입력받아서 8, 10, 16진수로 표기해보래. 
    {    int h;
    printf("16진수 정수 입력해봐.: "); scanf("%x", &h);
    printf("8진수:%08x, 10진수:%d, 16진수:%x", h, h, h);
    }