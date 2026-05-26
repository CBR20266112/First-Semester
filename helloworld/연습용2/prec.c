// 연산자 우선순위 (교과서 발췌)
#include <stdio.h>
int main (void) {
    int x = 0, y = 0; int result;

    result = 2 > 3 || 6 > 7;    //관계 연산자가 논리 연산자보다 우선.
    printf("%d\n", result);    //관계 연산자가 구라이니 전체 최종값도 0.

    result = 2 || 3 && 3 > 2;    //논리 연산자 중에서는 and가 or보다 우선, 3 AND 1.
    printf("%d\n", result);    //그리고 또 1이 되었으니 2 OR 1 연산까지.

    result = x = y = 1;    //대입 연산자는 역방향부터, 결국 흘러흘러 1.
    printf("%d\n", result);

    result =  - ++x + y--;    //결합 규칙 따라서 ++x 먼저, 그 뒤에 -부호 연산자.
    printf("%d\n", result);    //그리고 후위 --연산자, 우선순위는 가장 높으나 수식 계산 후에 수행되므로 -2 + 1이 되므로 전체 수식 결과값은 -1.
    return 0;
}