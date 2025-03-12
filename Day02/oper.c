#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n = 30;
    int res;

    // 논리연산자 && // A && B : A와 B 가 둘다 거짓이여야함
    // True : 1 , False : 0
    // 컴퓨터는 False(0)을 기준으로 두기때문에 0이 아닌수는 True로 인식함

    res = (n > 10) && (n < 20);
    printf("res: %d\n", res);

    res = (n < 10) || (n > 20);
    printf("res: %d\n", res);

    res = !(n <= 30); // (! : 부정연산자 )
    printf("res: %d\n", res);

    res = ~n; // ~ : not 연산자  // 30 : 0001 1110 -> ~30 : 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1110 0001
    // 1Byte = 8bit (0 ~ 7) 7번째는 부호bit : 0 일 경우 양수(생략가능), 1일 경우 음수(생략불가능)
    printf("res: %d\n", res);

    res = n << 1; // << : 비트 연산자 // 화살표 방향으로 비트 n만큼 이동 // 30 : 0001 1110 << 1 -> 0011 1100 // 비어진 공간에 0 채워주기
    printf("res: %x\n", res);  

    res = res >> 1; // 오른쪽으로 이동할 경우  // 비어진 공간에 부호비트와 같은 값으로 채워주기
    printf("res: %x\n", res);
    
    int n2 = 143;       // 0b : 1000 1111
    res = n2 << 1;      // 0b << 1 : 1 0001 1110
    printf("res: %x\n", res);   
    res = n2 >> 1;      // 0b >> 1 : 0100 0111
    printf("res: %x\n", res);



    return 0;
}
