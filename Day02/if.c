#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	/*int num = 10;

	if (num > 10 || num < 10) {
		printf("10보다 크거나 작다");
	}
	else {
		printf("10보다 크거나 작지않음");
	}*/

	// 숫자 맞추기
	
	int answer = 58;
	int num;
	
	while (1) {
		printf("값을 입력해주세요 > ");
		scanf_s("%d", &num);

		if (num < answer) {
			printf("%d보다 큽니다\n\n", num);
		}
		else if (num > answer) {
			printf("%d보다 작습니다 \n\n", num);
		}
		else {
			printf("정답입니다");
			break;
		}

	}

	return 0;
}