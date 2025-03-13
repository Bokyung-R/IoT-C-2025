# IoT-C-2025
IoT 개발자 C/C++ 리포지토리

## 1일차

- scanf
    ```c
    int a;
    char ch;
    scanf("%d", &a);
    scanf("%c", &ch);
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
        - ( 조건 ) ? a : b 조건이 참이라면 a, 거짓이라면 b 
    
    - 증감 연산자
        - ++, -- : 위치에 따라 실행 순서가 다름 참고

- 형변환 : [C](./Day02/casting.c)
    - 형변화를 많이 쓰는것은 좋지 못함

- 제어문
    - 선택제어문
        - if 
        - switch 
    - 반복제어문
        - for
        - while

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

- 문자
    - getchar() : 한문자를 읽어보는 함수
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
