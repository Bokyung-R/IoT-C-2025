#include<stdio.h>

int main() {

	int n = 10;
	int n2 = 3;
	double res;

	res = n / 3; // 정수/정수의 리턴값은 정수
	printf("res: %.1lf\n", res);	// 근데 실수로 나타내라고해서 .0을 추가해준것임
	
	// 실수로 리턴하기위한 형변환
	//res = (double)n / 3;	
	//res = n / 3.0;
	res = (double)n / 3.0;
	printf("res: %.1lf\n", res);

	return 0;
}