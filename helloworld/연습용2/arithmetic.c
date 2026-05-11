// 실수끼리의 나눗셈 (교과서 발췌)
#include <stdio.h>
int main(void) 
{
    double x, y, result;
    printf("실수 2개를 입력하시요: ");
    scanf("%lf %lf", &x, &y);
    result = x + y;
    printf("%lf + %lf = %lf\n", x, y, result);

    result = x / y;
    printf("%lf / %lf = %lf", x, y, result);
    
    return 0;
}