//#include<stdio.h>
//#include<malloc.h>
//
//int main() {
//
//	//char str[100];
//	//char* ps;
//
//	//printf("���ڿ��� �Է��ϼ��� > ");
//	//gets(str);
//	//printf("�Է��� ���ڿ� : %s\n", str);
//	//
//	///* ���ڿ� ���� */
//	//ps = (char*)malloc(strlen(str) + 1);	// �Էµ� ���ڿ��� ������ ������ �����κ��� �Ҵ�޴´�.
//	////if (ps == NULL) {
//	//	exit(1);
//	//}
//
//	//strcpy(ps, str);						// ���ڿ� ����
//
//	//printf("�Է��� ���ڿ� : %s\n", ps);
//
//	//free(ps);								// ���� �޸��� ��ȯ
//
//
//    char* ps[5];
//    char str[100];
//
//    for (int i = 0; i < 5; i++) {
//        printf("���ڿ��� �Է��ϼ��� > ");
//        gets(str);
//
//        ps[i] = (char*)malloc(strlen(str) + 1);     // ����Ʈ �迭
//        if (ps[i] == NULL) {
//            printf("�޸� �Ҵ� ����\n");
//            exit(1);
//        }
//        strcpy(ps[i], str);
//    }
//
//    printf("\n�Է��� ���ڿ� ���:\n");
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
