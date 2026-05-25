// XOR을 이용한 암호화 (교과서 발췌)
#include <stdio.h> 
int main(void) {
    char data = 'a';    //아스키값, 몇인지 알지? 97이라고. 이진수로는 01100001.
    char key = 0xff;    //16진수로 표시, 255까지. 이진수로는 11111111인 거지.
    char encrpted_data, orig_data;
    //그리고 xor을 수행하는 기호가 ^ 인 거지.
    printf("원래 문자= %c\n", data);
    //이제 암호화 거치기.
    encrpted_data = data ^ key;    //비트 전부 뒤집기, -> 10011110.
    printf("암호화된 문자= %c\n", encrpted_data);    
    //아스키 범위 밖이므로 출력이 깨질 수도 있다고 함.
    orig_data = encrpted_data ^ key;    //다시 뒤집기, 복구.
    printf("복원된 문자= %c\n", orig_data);

    return 0;
}