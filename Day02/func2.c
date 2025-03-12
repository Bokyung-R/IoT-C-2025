#include<stdio.h>

/* 함수 : 입력이 있는 함수 */

void func(int a,int b) {	// 매개변수
	printf("void func(int a, int b)\n");
	printf("a + b = %d\n", a + b);
}


int main() {
	
	func(10, 20);	// 실인수

	return 0;
}