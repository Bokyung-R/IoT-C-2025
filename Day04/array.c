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
//	// 4���� ������ ���� �޾Ƽ� �л��� �հ� ��� ���
//	int student_score[4][3];
//
//	for (int i = 0; i < 4; i++) {
//		printf("������ ���� �Է����ּ��� : ");
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
//		printf("�л�%d - �հ� : %d, ��� : % .1lf\n", i, sum, avg);
//	}
//
//
//	return 0;
//}