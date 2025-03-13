//#include<stdio.h>
//
///* 배열 */
///*  */
//int main() {
//
//	int ary[] = { 1,2,3 };
//
//	printf("배열의 크기 : %d\n", sizeof(ary));
//	printf("배열 방 한개의 크기 : %d\n", sizeof(ary[0]));
//	printf("배열 방의 갯수 : %d\n", sizeof(ary) / sizeof(ary[0]));
//	printf("배열 이름 : %p\n", ary);	// 배열이름은 주소
//	printf("배열의 첫번째방 주소 : %p\n", &ary[0]);
//	printf("배열의 두번째방 주소 : %p\n", ary + 1);
//	printf("배열의 두번째방 주소 : %p\n", &ary[1]);
//	printf("\n");
//
//	int arr[5] = { 0, };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d명의 성적 입력 : ",size);
//	for (int i = 0; i < size; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	printf("%d명의 성적 합 : %d\n",size, sum);
//	printf("%d명의 성적 평균 : %d\n", size, sum / size);
//
//
//	return 0;
//}