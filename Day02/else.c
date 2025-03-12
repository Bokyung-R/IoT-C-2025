#include<stdio.h>

int main() {

	int i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0)
			continue;
		// if (i == 7)	
		if (i >= 7)
			break;
		printf("%d\n", i);
	}

	while (1) {	}
	for (;;) {	}

	// ±¸±¸´Ü
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}