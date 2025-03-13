#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/* 대문자, 소문자 변환 */

int main() {
	char ch1;
	char ch2;

	printf("문자를 입력하시오 : ");
	scanf("%c", &ch2);

	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - ('a' - 'A');
	}

	printf("입력값 : %c\n", ch2);
	printf("변환값 : %c\n", ch1);

	return 0;
}