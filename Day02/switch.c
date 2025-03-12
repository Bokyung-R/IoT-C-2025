#include<stdio.h>

int main() {

	int num = 10;
	int n = 0;
	switch (n) {
	case 10:
		printf("빙고");
//		break; //반복문은ㄹ 벗어난다
	case 50:
		printf("작음");
		break;
	case 200:
		printf("큼");
		break;
	defalut:
		printf("이것도 저것도 아님");
		break;
	}

	return 0;


}

// switch(조건식) ~ case