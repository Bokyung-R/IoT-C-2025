/* 상수 */
#include <stdio.h>

int main()
{
	int r = 10;
	const double pi = 3.14; // const : 상수화
	double cf = 2 * pi * r;

	// pi = 3.15; // pi가 상수이므로 바뀌지않음
	double *dp = &pi; // 포인터를 사용하여 간접 참조하여 값 변경
	*dp = 4.0;


	printf("원둘레 : %.2lf\n", cf);
	printf("pi : %.2lf", pi);
	return 0;
}