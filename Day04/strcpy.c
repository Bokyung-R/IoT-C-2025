//#include<stdio.h>
//
///* strcpy - ���ڿ� ���� �Լ� */
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
//	//strcpy(str, str2);	// strcpy(����, ����)
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
//	strncpy(str, "abcd", 3);	// ���� �ּҺ��� ������ ���� ������ ������ �� �ִ�
//	printf("str : %s\n",str);
//
//
//
//
//
//	printf("������1 >> ");
//	fgets(str, sizeof(str), stdin);
//	printf("������ 2 >> ");
//	fgets(str2, sizeof(str), stdin);
//
//	myStrcpy(str,str2);
//
//	return 0;
//}
//
//void myStrcpy(char copy_str[], char ori_str[]) {
//	strcpy(copy_str, ori_str);
//	printf("strcpy����\n");
//	printf("������1 : %s\n", copy_str);
//	printf("������2 : %s\n", ori_str);
//
//}