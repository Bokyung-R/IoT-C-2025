#include<stdio.h>

/* �Լ� : �Է°� ����� �ִ� �Լ� */

int func(int a, int b) {
	int res = a + b;

	return res;
}

int main() {
	
	int result = func(10,20);
	printf("ȣ�� �� ���ϵ� �� : %d\n", result);

	return 0;
}