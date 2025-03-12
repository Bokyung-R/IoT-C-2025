#include<stdio.h>

int main() {
	
	int count = 0;
	while (count < 5) {
		count++;
		printf("안녕하세요 %d \n", count);
	}

	int sum = 0;
	int i = 1;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1~100까지의 합 : %d\n", sum);

	return 0;
}