//#include<stdio.h>
//
///* �迭 */
///*  */
//int main() {
//
//	int ary[] = { 1,2,3 };
//
//	printf("�迭�� ũ�� : %d\n", sizeof(ary));
//	printf("�迭 �� �Ѱ��� ũ�� : %d\n", sizeof(ary[0]));
//	printf("�迭 ���� ���� : %d\n", sizeof(ary) / sizeof(ary[0]));
//	printf("�迭 �̸� : %p\n", ary);	// �迭�̸��� �ּ�
//	printf("�迭�� ù��°�� �ּ� : %p\n", &ary[0]);
//	printf("�迭�� �ι�°�� �ּ� : %p\n", ary + 1);
//	printf("�迭�� �ι�°�� �ּ� : %p\n", &ary[1]);
//	printf("\n");
//
//	int arr[5] = { 0, };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d���� ���� �Է� : ",size);
//	for (int i = 0; i < size; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	printf("%d���� ���� �� : %d\n",size, sum);
//	printf("%d���� ���� ��� : %d\n", size, sum / size);
//
//
//	return 0;
//}