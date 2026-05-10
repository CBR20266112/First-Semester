//16진수로 입력받아서 8, 10, 16진수로 표기해보래.
#include <stdio.h> 
int main(void) {

   int h;
   printf("16진수 정수 입력해봐.: "); scanf("%x", &h);
   printf("8진수:%o, 10진수:%d, 16진수:%#x", h, h, h);
   //16진수를 0을 붙여 출력받으려면 %#x여야 한다고.
   return 0; 
}