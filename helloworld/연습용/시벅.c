// 연봉을 한 푼도 쓰지 않고 모아서 10억??
#include <stdio.h>
int main(void) {
    int salary; int income; int year;
    printf("월급을입력하시요: ");
    scanf("%d", &salary);
    income = salary*12;
    printf("이게 네 연봉?: %d\n", income);
    year = 1000000/income;
    printf("그러면 네가 ㅈ빠지게 벌어봤자 %d년씩이나 걸리겠네.\n", year);
    printf("꿈 깨야겠지?");

    return 0;

}