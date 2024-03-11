#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // 정수형 변수 예제
    /* int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age); */

    // 실수형 변수 예제
    /* float f = 46.5f;
    printf("%.2f\n", f);
    double d = 4.256;
    printf("%.2f\n", d); */

    // 상수
    /* const int YEAR = 2000;
    printf("태어난 년도 : %d\n", YEAR); */
    // YEAR = 2021; // 변경할 수 없음

    // printf
    // 연산
    /* int add = 3 + 7;
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3, 7, 3 + 7); */

    // scanf
    /* int input;
    printf("값을 입력하세요 : ");
    scanf("%d", &input); // 입력 받겠다. input이라는 변수에
    // & : input이라는 변수가 정의된 곳에 값을 입력받겠다는 표시
    printf("입력값 : %d\n", input);

    int one, two, three;
    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &one, &two, &three); // 입력은 띄어쓰기로 구분
    printf("첫번째 값 : %d\n", one);
    printf("두번째 값 : %d\n", two);
    printf("세번째 값 : %d\n", three); */

    // 문자
    /* char c = 'A';
    printf("%c\n", c); */

    // 문자열 : 문자의 배열
    /* char str[256];
    scanf("%s", str, sizeof(str)); // sizeof로 크기를 str만큼으로 제한
    printf("%s\n", str); */

    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름, 나이, 몸무게, 키, 범죄명

    return 0;
}