// C언어 - 수식과 연산자 예제 (교과서 발췌)
#include <stdio.h>
int main(void) {
    double a, b;

    printf("실수 2개 입력하시요.: ");
    scanf("%lf %lf", &a, &b);

    double plus = a + b; double minus = a - b;
    printf("a + b = %.2f\na - b = %.2f", plus, minus);

    return 0;
}