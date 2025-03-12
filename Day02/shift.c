#include<stdio.h>

int main() {

	// 문자 비트 연산자

	char ch = 0x7f;		// 0b 0111 1111
	unsigned char uch = 0x7f;
	printf("ch : %x, uch : %x, ch : %u, uch : %u=n\n", ch, uch, ch, uch);
	
	char ch1 = 0x9f;	// 0b 1001 1111
	unsigned char uch1 = 0x9f;
	printf("ch1 : %x, uch1 = %x\n", ch1, uch);

	ch1 >>= 1;			// 0b 1100 1111	// 부호가 있기때문에 부호 문자와 같은 1 추가
	uch1 >>= 1;			// 0b 0100 1111	// 부호가 없는 unsigned 이기 때문에 비어있는 공간에 0 추가
	printf("ch1 : %x, uch1 : %x\n", ch1, uch1);

	ch1 = uch1;

	return 0;

}