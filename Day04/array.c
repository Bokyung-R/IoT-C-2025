//# define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//
//	int ary[4] = {1, 2, 3, 4};
//
//	int ary2[3][2] = { {1, 2},{3, 4},{5, 6} };
//	int ary3[3][4] = { {1, 2},{3, 4, 5},{6, 7, 8, 9} };
//	int ary4[3][2] = { 1, 2, 3, 4, 5, 6 };
//	int ary5[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 2; j++) {
//			printf("%d, ", ary2[i][j]);
//		}
//	}
//
//	// 4명의 국영수 점수 받아서 학생별 합게 평균 출력
//	int student_score[4][3];
//
//	for (int i = 0; i < 4; i++) {
//		printf("국영수 점수 입력해주세요 : ");
//		for (int j = 0; j < 3; j++) {	
//			scanf("%d", &student_score[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 4; i++) {
//		int sum = 0;
//		float avg = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += student_score[i][j];
//		}
//		avg = sum / 3.0;
//		printf("학생%d - 합계 : %d, 평균 : % .1lf\n", i, sum, avg);
//	}
//
//
//	return 0;
//}