//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int sum(int, int);
//int minus(int, int);
//void func(int(*fp)(int, int));
//
///* 함수 포인터 */
//int main() {
//	int(*fp)(int, int) = 0; // 초기화되지 않았을 수 있는 로컬 포인터 변수 'fp'이(가) 사용되었습니다. -> 0으로 초기화
//	//int res;
//
//	//res= sum(20, 10);
//	//res = minus(20, 10);
//	//fp = sum;
//	//res = fp(20, 10);
//	//printf("res: %d", res);
//
//	char oper;
//	printf("연산자 입력(+,-) > ");
//	scanf("%c", &oper);
//
//	if (oper == '+') {
//		fp = sum;
//		func(fp);
//	}
//	else if (oper == '-') {
//		fp = minus;
//		func(fp);
//	}
//	else {
//		printf("연산자 오류");	
//	}
//
//	return 0;
//}
//
//void func(int(*fp)(int, int)) {
//	int a, b;
//	printf("정수 2개 입력 > ");
//	scanf("%d %d", &a, &b);
//
//	int res = fp(a, b);
//	printf("res : %d\n", res);
//}
//
//int sum(int a, int b) {
//	return a + b;
//}
//
//int minus(int a, int b) {
//	return a - b;
//}