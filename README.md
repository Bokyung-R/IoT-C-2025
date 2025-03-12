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

    - scanf #define _CRT_SECURE_NO_WARNINGS 사용

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
