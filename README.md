# IoT-C-2025
IoT 개발자 C/C++ 리포지토리

## 1일차

- scanf 문제 : 버퍼에 \n이 남는 문제가 생김
    ```c
    int a;
    char ch;
    scanf("%d", &a);    // a = 10
    scanf("%c", &ch);   // ch = '\n'  
    ```

    - 해결 방법 1
    ```c
    int a;
    char ch;
    scanf("%d", &a);
    getchar();  // 개행 문자 제거
    scanf("%c", &ch);

    ```

    - 해결 방법 2
    ```c
    int a;
    char ch;
    scanf("%d", &a);
    scanf(" %c", &ch); // 앞에 띄어쓰기 추가
    ```

    - #define _CRT_SECURE_NO_WARNINGS 사용

        - #define _CRT_SECURE_NO_WARNINGS를 먼저 선언하는 경우

        ```C
        #define _CRT_SECURE_NO_WARNINGS
        #include <stdio.h>
        ```
        ✅ _CRT_SECURE_NO_WARNINGS가 먼저 정의됨 → 이후 포함되는 <stdio.h>가 이 매크로를 인식하여 scanf 등의 함수에 대한 보안 경고가 비활성화됨.

        - #include <stdio.h>를 먼저 선언하는 경우

        ```C
        #include <stdio.h>
        #define _CRT_SECURE_NO_WARNINGS
        ```
        ⚠️ 비효율적 → <stdio.h>가 이미 포함된 후 _CRT_SECURE_NO_WARNINGS를 정의하기 때문에, <stdio.h> 내부에서 이 매크로를 인식하지 못함.
        🔹 즉, 보안 경고가 계속 발생할 수 있음.


## 2일차
- 연산자 : [C 연산자1 비트연산까지](./Day02/oper.c), [C 연산자2 삼항,증감](./Day02/oper2.c)
    - 논리연산자 
        - && (AND 연산자) : A && B : A와 B가 둘 다 참이여야 True 
        - || (OR 연산자) : A와 B 중에 하나만 참이여도 True
        `True : 1 , False : 0 `
        `컴퓨터는 False(0)을 기준으로 두기때문에 0이 아닌수는 True로 인식함`

    - 부정연산자 
        - ! : True -> False, False -> True

    - 비트 연산자 
        - &
            |연산|결과|
            |----|----|
            |0 & 0|0|
            |0 & 1|0|
            |1 & 0|0|
            |1 & 1|1|
            
        - |
            |연산|결과|
            |----|----|
            |0 \| 0|0|
            |0 \| 1|1|
            |1 \| 0|1|
            |1 \| 1|1|

        - << n , >> n: 화살표 방향을 따라 n만큼 비트 이동 
            ex) 30 : 0001 1110 << 1 -> 0011 1100
            - 왼쪽으로 이동시 비어진 공간에 0 채워주기
            - **오른쪽으로 이동시 비어진 공간에 부호비트와 같은 값으로 채워주기** 

        - not 연산자
            - ~ : 비트 0 -> 1, 1 -> 0
                ex) 30 : 0001 1110 -> ~30 : 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1110 0001

            - 추가 [char타입 비트 연산](./Day02/shift.c)
       
    - 삼항연산자
        - ( 조건 ) ? (조건이 참일때) : (조건이 거짓일때) 
    
    - 증감 연산자
        - ++, -- : 위치에 따라 실행 순서가 다름 참고
            - a++, a-- : 현재 a를 사용하여 실행한 수 a 값 증감
            - ++a, --a : a 값을 증감한 수 사용
            ```C
            int a = 0;
            printf("a++ 결과\n");
            for (int i = 0; i < 2; i++) {
                printf("%d ", a++);
            }
            printf("\n");
            
            printf("++a 결과\n");
            a = 0;
            for (int i = 0; i < 2; i++) {
                printf("%d ", ++a);
            }

            // 결과
            // a++ 결과
            // 0 1
            // ++a 결과
            // 1 2
            ```

- 형변환 : [C](./Day02/casting.c)
    - 형변화를 많이 쓰는것은 좋지 못함

- 제어문 [C](./Day02/제어문.c)
    - 선택제어문
        - if : [C](./Day02/if.c)
        ```C
        if (조건) {
            조건이 참일때 코드
        }
        else {
            조건이 거짓일때의 코드
        }
        return 0;
        ```
        - switch 
        ```C
        switch(표현식) {
            case 상수1:
            실행 코드 1;
            break;  // break가 없으면 case 2, 3도 다 실행됨으로 주의
            case 상수2:
            실행 코드 2;
            break;
            ...
            default:
            기본적으로 항상 실행될 코드
            break;
        }
        ```

    - 반복제어문
        - for
        ```C
        for (변수형 초기값; 조건; 증감) {  
            실행할 코드;
        }
        ```
        - while [C](./Day02/while.c)
        ```c
        while (조건) { // 1 : True, 0 : False
            조건이 참일 때 반복 실행할 코드;
            
            // break;
        }
        ```

## 3일차
- 배열 [array1](./Day03/array.c), [array2](./Day03/array2.c), [array3](./Day03/array3.c)
    - 선언 방식
        ```C
        int arr1[5] = {1,2,3,4,5};
        int arr2[] = {1,2,3,4,5};
        int arr3[5];
        // 위의 3가지 경우는 정상적으로 선언됨

        int arr4[]; // 이경우에는 선언되지않음
        ```

    - 주소 : 배열이름은 주소
        => arr = &arr[0], arr + 1 = &arr[1]

    - char 배열 저장시에는 size보다 + 1 만큼의 공간이 필요하다. 

- 포인터 [pointer1](./Day03/pointer.c) ~ [pointer7](./Day03/pointer7.c)
    - 포인터 : 주소
    - 포인터 변수 : 주소를 저장할 수 있는 변수

    - 선언 방식 
        ```C
        int* p = 변수의 주소값 ;
        ```
    
    - 사용법
        ```C
        int num = 100;
        printf("num의 주소 :%p\t", &num);
        printf("num의 값 : %d\n", num);

        int* p = &num;											// * : 아무 의미없는 표시
        printf("포인터변수 p에 저장된 값(주소) : %p\t", p);
        printf("포인터변수 p가 가르키는 곳의 값 : %d\n", *p);	// * : 간접 참조 연산자

        // (num += 1) == (*p += 1)
        ```

    - const
        ```C
        const int* pn2 = &num2;	//데이터 상수 : 포인터 변수를 통한 데이터의 변경을 불허
        // *pn2 = 100;
        num2 = 0;
        pn2 = &num2;

        int num3 = 40;
        int* const pnum3 = &num3;	// 포인터 상수 : 포인터 변수가 가리키는 주소의 변경을 불허
        *pnum3 = 100;
        printf("%d\n", num3);
        // pnum3 = &num2;

        const int* const pn5 = &num2;
        //*pn5 = 1000;
        // pn5 = &num3;
        num2 = 40;
        ```
        - const int* pnum1 : 데이터 상수화(가리키는 값 변경 불가, 포인터 주소 변경 가능)
        - int* const pnum2 : 포인터 상수화(가리키는 값 변경 가능, 포인터 주소 변경 불가)


- 문자
    - getchar() : 한문자를 읽어오는 함수
    - putchar() : 한문자를 출력하는 함수 

    - 아스키 코드
        - 소문자 대문자 변환시 ('a' - 'A') 활용
        ```C
        int main() {
            char ch1;
            char ch2;

            printf("문자를 입력하시오 : ");
            scanf("%c", &ch2);

            if ((ch2 >= 'A') && (ch2 <= 'Z')) {
                ch1 = ch2 + ('a' - 'A');
            }
            else if ((ch2 >= 'a') && (ch2 <= 'z')) {
                ch1 = ch2 - ('a' - 'A');
            }

            printf("입력값 : %c\n", ch2);
            printf("변환값 : %c\n", ch1);

            return 0;
        }
        ```


## 4일차
- 문자 입력 
    - scanf
    - gets
    - fgets
        ```C
        char str[100];

        /* scanf */
        printf("문자열 입력 >> ");
        scanf("%s", str);

        printf("문자열 : %s", str);
        scanf("%s", str);
        printf("다음 문자열 : %s", str);

        /* gets */
        printf("공백을 포함한 입력 >> ");
        gets(str);
        printf("입력 문자열 : %s\n", str);

        /* fgets */
        printf("공백을 포함한 입력 >> ");
        fgets(str, sizeof(str), stdin);
        printf("입력 문자열 : %s\n", str);
        ```

- 문자 출력
    - puts
    - fputs
        ```C
        char str[100] = "Delmonte orange";
        char* ps = "banana";

        printf("%s\n", str);
        puts(str);			// 자동 개행(줄바꿈)
        fputs(str, stdout);	// 개행 안됨
        puts(ps);
        fputs(ps, stdout);
        ```

- string 함수
    - strlen(str) : 문자열 길이출력
    - strcat(str, str1) : 문자열 추가 
        - str = str + str1
    - strcmp(str, str1) : 문자열 비교
        - str이 사전에서 먼저 나오면 -1, str1이 먼저 나오면 1반환, 같으면 0반환 
        - str1이 크면 1, str이 크면 -1
    - strcpy(str,str1) : 문자열 복사 함수
        - str = str1
    
- 변수
    - 지역변수
    - 정적변수
        - 정적지역변수 

- 포인터
    - 배열포인터 : 배열을 가르키는 포인터
    - 포인터 배열 : 포인터를 저장할 수 있는 배열
        ```C    
        int(* pary)[4];			// int형 변수 4개의 배열을 가리키는 배열 포인터

        int* pary[4];			// 포인터 배열
        ```

    - **이중 포인터**
        ```C
        int n = 100;
        int* pn;
        int** ppn;		// 이중포인터

        pn = &n;		// 변수 n의 주소를 저장
        ppn = &pn;		// 포인터변수 pn의 주소를 저장하는 이중 포인터

        printf("n : %d\t n주소 : %p\n", n, &n);
        printf("pn : %p\t pn주소 : %p\t n값 : %d\n", pn, &pn, *pn);
        printf("ppn : %p\t ppn주소 : %p\t *ppn : %p\t **ppn : %d\n",ppn,&ppn,*ppn,**ppn);

        ```


## 5일차
- = : 대입연산자
    - l-value : 변수, 포인터, 배열의 요소, 구조체 멤버
    - r-value : 상수, 리터럴, 주소, 연산결과, 함수 반환값, 배열, NULL

- malloc : 메모리 동적 할당
    - 선언 방법
        ```C
        #inclue<malloc.h>   // 헤더파일 선언 

        int* pi = (void*)malloc(sizeof(타입));
        ...
        free(pi);   // 메모리 반환해줘야함. 메모리 누수 방지
        ```

    - calloc - 메모리 동적으로 할당하여 0으로 초기화
    - realloc - 크기 조절

- struct : 사용자 정의 자료형 : 구조체
    - 기존 자료형을 묶어서 만든 복한 자료형
    - 선언 방법
        ```C
        struct 구조체명{
            타입 이름 ;
            타입 이름 ;
        };

        int main(){
            struct 구조체명 변수명;
            ...
            return 0;
        }
        ```

    - struct 안에 struct 가능 [C](./Day05/struct3.c)
    - struct 를 사용하여 함수 만들기 : [C](./Day05/struct5.c)
        - 함수 원형
            - 함수를 미리 선언하는 역할
            ```c
            반환타입 함수이름(매개변수 타입);
            ```
    - typedef : [C](./Day05/struct4.c)
        - typedef A B : 타입A를 B라는 별칭으로 사용

    - 구조체 포인터 : [C](./Day05/stpointer.c)
        - 구조체 변수를 통해서 멤버에 접근하는 방법은? .(멤버접근 연산자)
        - 구조체 포인터를 통해서 멤버의 접근하는 방법은? ->(화살표연산자, 애로우연산자)
        - (*ps).mat 와 ps->mat 같음

    - 구조체 배열 : [C](./Day05/stArray.c)
        - 함수 호출 시 배열을 넣게되면 매개변수로 포인터 변수를 써야함.
