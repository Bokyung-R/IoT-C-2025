#include<stdio.h>

/* void �Լ� : �Է°� ����� ���� �Լ� - �Լ� �ȿ��� ����� ���³��� */

void func() {	// �Լ� ���� : �Լ��� ����� ���⿡ �ۼ��Ѵ�.
	int a = 10, b = 20;
	printf("void func()\n");
	printf("a + b = %d\n", a + b);

}

int main() {
	func();	// �Լ� ȣ��

	return 0;
}