///*
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct vision {	
//	double left;
//	double right;
//} Vision;
//
//
//Vision exchange(Vision);				// 함수 원형
//
//int main() {
//    Vision rot;
//    printf("시력 입력 >> ");
//    scanf("%lf %lf", &rot.left, &rot.right);
//
//    rot = exchange(rot);  // 시력 교환 함수 호출
//
//    printf("바뀐 시력 : %.1lf, %.1lf\n", rot.left, rot.right);
//
//    return 0;
//}
//
//Vision exchange(Vision v) {
//    Vision temp;
//    temp.left = v.right;  // 왼쪽과 오른쪽 시력을 교환
//    temp.right = v.left;
//    return temp;  // 변경된 Vision 구조체 반환
//}