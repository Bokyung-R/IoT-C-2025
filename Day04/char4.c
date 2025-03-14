//#include <stdio.h>
//
//void myStrInput(char* str,int size);
//
//int main() {
//    char str[100];
//    int size = sizeof(str) / sizeof(str[0]);
//
//    myStrInput(str,size);
//
//    printf("입력한 문자열 : %s\n", str);
//    return 0;
//}
//
//void myStrInput(char* str,int size) {
//    char ch;
//    int i = 0;
//
//    while (i < size-1) {
//        ch = getchar();
//
//        if (ch != '\n') {
//            str[i] = ch;
//            i++;
//        }
//        else {
//            break;
//        }
//    }
//
//    str[i] = '\0'; 
//}
