//#include<stdio.h>
//
///* strcpy - 문자열 복사 함수 */
//
//void myStrcpy(char[], char[]);
//
//int main() {
//	char str[100] = "orange";
//	char str2[100] = "apple";
//	char* ps = "apple";
//
//	//printf("str : %s\n", str);
//	//printf("str2 : %s\n", str2);
//
//	//strcpy(str, str2);	// strcpy(복사, 원본)
//	//printf("str : %s\n", str);
//	//printf("str2 : %s\n", str2);
//
//	//strcpy(str, "banana");
//	//printf("str : %s\n", str);
//
//	//strcpy(str, ps);
//	//printf("str : %s\n", str);
//
//	////strcpy(ps, str2);
//	////printf("ps : %s\n", ps);
//
//	strncpy(str, "abcd", 3);	// 시작 주소부터 복사할 문자 갯수를 설정할 수 있다
//	printf("str : %s\n",str);
//
//
//
//
//
//	printf("데이터1 >> ");
//	fgets(str, sizeof(str), stdin);
//	printf("데이터 2 >> ");
//	fgets(str2, sizeof(str), stdin);
//
//	myStrcpy(str,str2);
//
//	return 0;
//}
//
//void myStrcpy(char copy_str[], char ori_str[]) {
//	strcpy(copy_str, ori_str);
//	printf("strcpy이후\n");
//	printf("데이터1 : %s\n", copy_str);
//	printf("데이터2 : %s\n", ori_str);
//
//}