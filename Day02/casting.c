#include<stdio.h>

int main() {

	int n = 10;
	int n2 = 3;
	double res;

	res = n / 3; // ����/������ ���ϰ��� ����
	printf("res: %.1lf\n", res);	// �ٵ� �Ǽ��� ��Ÿ������ؼ� .0�� �߰����ذ���
	
	// �Ǽ��� �����ϱ����� ����ȯ
	//res = (double)n / 3;	
	//res = n / 3.0;
	res = (double)n / 3.0;
	printf("res: %.1lf\n", res);

	return 0;
}