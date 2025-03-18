/*
    
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct addr {
    char name[20];
    int age;
    char tel[20];
    char addr[100];
} Addr;

void print_list(Addr* a);

int main() {
    Addr list[3] = { 
        {"홍길동", 100, "010-1234-5678", "몰라"},
        {"김철수", 33, "010-3333-3333", "부산"},
        {"박상민", 25, "010-5555-5555", "서울"}
    };
    
    print_list(list);

    //for (int i = 0; i < 3; i++) {
    //    printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    //}

    return 0;
}

void print_list(Addr* a) {              // list가 주소이므로 포인터변수를 써야함
    for (int i = 0; i < 3; i++) {
        printf("%s, %d, %s, %s\n", a[i].name, a[i].age, a[i].tel, a[i].addr);
    }
};