// 섭씨화씨
#include <stdio.h>
int main (void) {
    int c; float f;
    printf("화씨값을먼저입력해봐: ");
    scanf("%f", &f);
    c = (5.0/9.0) * (f -32.0);

    printf("이소라목소리정말옥구슬이시다%d", c);

    return 0;
}