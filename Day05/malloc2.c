//#include<stdio.h>
//#include<malloc.h>
//
//int main() {
//
//	//char str[100];
//	//char* ps;
//
//	//printf("문자열을 입력하세요 > ");
//	//gets(str);
//	//printf("입력한 문자열 : %s\n", str);
//	//
//	///* 문자열 저장 */
//	//ps = (char*)malloc(strlen(str) + 1);	// 입력된 문자열을 저장할 공간을 힙으로부터 할당받는다.
//	////if (ps == NULL) {
//	//	exit(1);
//	//}
//
//	//strcpy(ps, str);						// 문자열 복사
//
//	//printf("입력한 문자열 : %s\n", ps);
//
//	//free(ps);								// 동적 메모지 반환
//
//
//    char* ps[5];
//    char str[100];
//
//    for (int i = 0; i < 5; i++) {
//        printf("문자열을 입력하세요 > ");
//        gets(str);
//
//        ps[i] = (char*)malloc(strlen(str) + 1);     // 포인트 배열
//        if (ps[i] == NULL) {
//            printf("메모리 할당 실패\n");
//            exit(1);
//        }
//        strcpy(ps[i], str);
//    }
//
//    printf("\n입력한 문자열 목록:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("%s\n", ps[i]);
//    }
//
//    for (int i = 0; i < 5; i++) {
//        free(ps[i]);
//    }
//
//    return 0;
//}
