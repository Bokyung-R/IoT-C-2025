///*
//	�޸� ���� �Ҵ� : malloc - free
//	calloc - �޸� �������� �Ҵ��Ͽ� 0���� �ʱ�ȭ
//	realloc - ũ�� ����
//*/
//
//#include<stdio.h>
//#include<malloc.h>	// ������� ����
//
//int main() {
//
//	int* pi = (int*)malloc(sizeof(int));		// �������� �Է�ũ�⸸ŭ �޸� ������ �Ҵ�޾Ƽ� ���� �ּҸ� ����
//	if (pi == NULL) {
//		printf("�޸� �Ҵ� ����");
//		exit(1);
//	}
//	printf("�޸� �Ҵ� ����");
//
//	free(pi);
//
//	return 0;
//}