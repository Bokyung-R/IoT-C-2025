#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	/*int num = 10;

	if (num > 10 || num < 10) {
		printf("10���� ũ�ų� �۴�");
	}
	else {
		printf("10���� ũ�ų� ��������");
	}*/

	// ���� ���߱�
	
	int answer = 58;
	int num;
	
	while (1) {
		printf("���� �Է����ּ��� > ");
		scanf_s("%d", &num);

		if (num < answer) {
			printf("%d���� Ů�ϴ�\n\n", num);
		}
		else if (num > answer) {
			printf("%d���� �۽��ϴ� \n\n", num);
		}
		else {
			printf("�����Դϴ�");
			break;
		}

	}

	return 0;
}