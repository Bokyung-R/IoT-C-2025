//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int sum(int, int);
//int minus(int, int);
//void func(int(*fp)(int, int));
//
///* �Լ� ������ */
//int main() {
//	int(*fp)(int, int) = 0; // �ʱ�ȭ���� �ʾ��� �� �ִ� ���� ������ ���� 'fp'��(��) ���Ǿ����ϴ�. -> 0���� �ʱ�ȭ
//	//int res;
//
//	//res= sum(20, 10);
//	//res = minus(20, 10);
//	//fp = sum;
//	//res = fp(20, 10);
//	//printf("res: %d", res);
//
//	char oper;
//	printf("������ �Է�(+,-) > ");
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
//		printf("������ ����");	
//	}
//
//	return 0;
//}
//
//void func(int(*fp)(int, int)) {
//	int a, b;
//	printf("���� 2�� �Է� > ");
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