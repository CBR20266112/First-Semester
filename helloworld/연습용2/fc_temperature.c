// 화씨 섭씨 변환 (교과서 바루체)
#include <stdio.h>
int main(void) {
    double f_temp; double c_temp;

    printf("섭씨로 몇 도요: ");
    scanf("%lf", &c_temp);
    f_temp = 9.0 / 5 * c_temp + 32;    //섭씨 = 5/9(화씨-32)
    printf("화씨론 %f요.", f_temp);

    return 0;
}