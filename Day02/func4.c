#include <stdio.h>

/*
    �Լ� ����
    �Լ� ����, �Լ� ȣ��, �Լ� ����
*/

int func(int, int);      // �Լ� ����, �Լ� ����

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

    printf("���� ���α׷��Դϴ� \n");
    
    while (1) {

        printf("�����ڸ� �Է��ϼ��� (+, -, *, /) (����� Q�Է�) : ");
        char oper;
        scanf_s(" %c", &oper, sizeof(oper));

        if (oper == 'Q' || oper == 'q') {
            break;
        }

        printf("�� ���� ������ �Է��ϼ��� : ");
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
                printf("0���� ���� �� �����ϴ�.\n");
            }
            else {
                float result = calc_div(a, b);
                printf("%d / %d = %.1f\n", a, b, result);
            }
        }
        else {
            printf("�߸��� �������Դϴ�.\n");
            return 0;
        }

    }
    //int result = func(10, 20);
    //printf("ȣ�� �� ���ϵ� �� : %d\n", result);
    
    return 0;
}

int func(int a, int b) {
    int res = a + b;
    return res;
}