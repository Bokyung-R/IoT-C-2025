
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	//char str[20];
	//printf("문자를 입력하세요 >> ");
	//scanf_s("%s", str, sizeof(str));

	//printf("입력한 문자열 : %s\n", str);

	/*printf("char 크기: %d\n", sizeof(char));
	printf("정수 크기: %d\n", sizeof(int));
	printf("실수 크기: %d\n", sizeof(float));
	printf("double 크기: %d\n", sizeof(double));*/

	// 배열이름은 배열의 시작 주소를 나타남, for문으로 배열해야함
	// scanf_s의 경우에는 사이즈를 보기때문에 char 타입을 입력할때는 sizeof( ) 메소드를 사용해서 크기를 알려줘야함

	char str[20];
	int age;
	printf("나이와 이름을 입력하세요: ");
	scanf("%d %19s", &age, str);  // 문자열 입력 길이 제한 추가

	/*printf("나이: ");
	scanf_s("%d", &age);	
	printf("이름: ");
	scanf_s("%s", &str,sizeof(str)); */

	printf("이름: %s, 나이: %d\n", str, age);

	return 0;



}