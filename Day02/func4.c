#include <stdio.h>

/*
    함수 원형
    함수 원형, 함수 호출, 함수 정의
*/

int func(int, int);      // 함수 선언, 함수 원형

int calc_plus(int a, int b) {
    return a + b;
}

int calc_minus(int a, int b) {
    return a - b;
}

int calc_mul(int a, int b) {
    return a * b;
}

float calc_div(int a, int b) {
    return (float)a / b;
}

int main() {

    printf("계산기 프로그램입니다 \n");
    
    while (1) {

        printf("연산자를 입력하세요 (+, -, *, /) (종료시 Q입력) : ");
        char oper;
        scanf_s(" %c", &oper, sizeof(oper));

        if (oper == 'Q' || oper == 'q') {
            break;
        }

        printf("두 개의 정수를 입력하세요 : ");
        int a, b;
        scanf_s("%d %d", &a, &b);

        int result;

        if (oper == '+') {
            result = calc_plus(a, b);
            printf("%d + %d = %d\n", a, b, result);
        }
        else if (oper == '-') {
            result = calc_minus(a, b);
            printf("%d - %d = %d\n", a, b, result);
        }
        else if (oper == '*') {
            result = calc_mul(a, b);
            printf("%d * %d = %d\n", a, b, result);
        }
        else if (oper == '/') {
            if (b == 0) {
                printf("0으로 나눌 수 없습니다.\n");
            }
            else {
                float result = calc_div(a, b);
                printf("%d / %d = %.1f\n", a, b, result);
            }
        }
        else {
            printf("잘못된 연산자입니다.\n");
            return 0;
        }

    }
    //int result = func(10, 20);
    //printf("호출 후 리턴된 값 : %d\n", result);
    
    return 0;
}

int func(int a, int b) {
    int res = a + b;
    return res;
}