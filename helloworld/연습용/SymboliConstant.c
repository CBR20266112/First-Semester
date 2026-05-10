// 기호 상수 선언 2가지 방법 (교과서 발췌)
#include<stdio.h>
#define TAX_RATE 0.2    //#define을 이용한 기호상수 정의

int main(void) 
{
    const int MONTHS = 12;    //const를 이용한 기호상수 정의
    int m_salary, y_salary;    //얘는 변수 선언

    printf("월급을 입력하십시ㅛ.: ");
    scanf("%d", &m_salary);

    y_salary = MONTHS * m_salary;
    printf("연봉은 %d입니다.\n", y_salary);
    printf("세금은 %f입니다. 도둑놈들아", y_salary*TAX_RATE);

    return 0;
}