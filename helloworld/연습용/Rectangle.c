// 사각형의 둘레와 면적
#include <stdio.h> 
int main(void) {

    int w, h, area, perimeter;
    
    printf("가로와 세로 입력해: ");
    scanf("%d %d", &w, &h);

    area = w*h; perimeter = 2*(w+h);
    printf("넓데데: %d, 뚤레뚤레: %d", area, perimeter);

    return 0;
}