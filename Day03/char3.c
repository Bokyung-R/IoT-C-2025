#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


/* �빮��, �ҹ��� ��ȯ */

int main() {
	char ch1;
	char ch2;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &ch2);

	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');
	}
	else if ((ch2 >= 'a') && (ch2 <= 'z')) {
		ch1 = ch2 - ('a' - 'A');
	}

	printf("�Է°� : %c\n", ch2);
	printf("��ȯ�� : %c\n", ch1);

	return 0;
}