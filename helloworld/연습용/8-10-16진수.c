//16진수로 입력받아서 8, 10, 16진수로 표기해보래.
#include <stdio.h> 
int main(void) {

   int h;
   printf("16진수 정수 입력해봐.: "); scanf("%x", &h);
   printf("8진수:%o, 10진수:%d, 16진수:%x", h, h, h);
   return 0; 
}