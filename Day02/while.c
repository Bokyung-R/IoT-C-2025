#include<stdio.h>

int main() {
	
	int count = 0;
	while (count < 5) {
		count++;
		printf("�ȳ��ϼ��� %d \n", count);
	}

	int sum = 0;
	int i = 1;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1~100������ �� : %d\n", sum);

	return 0;
}