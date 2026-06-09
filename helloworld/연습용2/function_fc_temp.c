//섭씨 화씨 변환 함수로 맘ㄴ들어보기
#include <stdio.h>
double fc_temperature(double c){
    double f;
    f = 9.0 / 5.0 * c + 32;    //화씨는 섭씨 더하기 32 곱하기.. 뭐요?
    return(f);
}
//이제 호출해야 하는데.....
int main(void) {
    double c, f;
    printf("섭씰ㅗ 몇 도요?: ");
    scanf("%lf", &c);
    f = fc_temperature(c);    //호출해서 저 위에 함수박스 안에서 화씨로 바꿔 뱉게
    printf("그럼 화씨로는 %lf도구만.", f);
}