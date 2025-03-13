//#include <stdio.h>
//
//void printAry(int* ary, int size); 
//void inputAry(int* ary, int size);
//
//int main() {
//    int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int ary2[] = { 1, 2, 3 };
//    int size = sizeof(ary) / sizeof(ary[0]); 
//
//    int inputary[10];
//    int input_size = sizeof(inputary) / sizeof(inputary[0]);
//    inputAry(inputary,input_size);
//
//    printAry(inputary, input_size);
//
//
//    return 0;
//}
//
//void inputAry(int* ary, int size) {
//    printf("%d개의 정수 입력", size);
//    for (int i = 0; i < size; i++) {
//        scanf_s("%d", ary + i);
//    }
//
//}
//
//void printAry(int* ary, int size) {
//    for (int i = 0; i < size; i++) {
//        printf("ary[%d] : %d \n",i, ary[i]); 
//    }
//    printf("\n");
//}
