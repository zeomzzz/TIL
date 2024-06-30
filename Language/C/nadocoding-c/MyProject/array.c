#include <stdio.h>

int main(void)
{
    // 배열
    // int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("지하철 1호차에 %d 명이 타고 있습니다\n", subway_1);
    // printf("지하철 2호차에 %d 명이 타고 있습니다\n", subway_2);
    // printf("지하철 3호차에 %d 명이 타고 있습니다\n", subway_3);

    // 여러 개의 변수를 함께, 동시에 생성
    // int subway_array[3]; // [0] [1] [2]
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("지하철 %d 호차에 %d 명이 타고 있습니다\n", i + 1, subway_array[i]);
    // }

    // 값 설정 방법
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // 값을 초기화하지 않으면, 더미 값이 나옴 (더미 값은 컴퓨터마다 다름)
    // int arr_0[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr_0[i]);
    // }

    // 배열 크기는 항상 상수로 선언
    // int size = 10;
    // // int arr_1[size];
    // int arr_1[10];

    // 값을 일부만 선언하면 나머지는 0으로 초기화됨
    // int arr_2[10] = {1, 2}; // 세 번째 값부터는 자동으로 0으로 초기화
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr_2[i]);
    // }

    // int arr_3[] = {1, 2}; // arr[2]

    // float arr_f[5] = {1.0f, 2.0f, 3.0f};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f\n", arr_f[i]);
    // }

    // 문자 vs. 문자열
    // char c = 'A';
    // printf("%c\n", c);

    // 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함
    // char str[6] = "coding"; // [c][o][d][i][n][g]
    // char str[7] = "coding";
    // printf("%s\n", str);

    char str[] = "coding";
    printf("%s\n", str);         // coding
    printf("%d\n", sizeof(str)); // 7 -> NULL 문자까지 포함됨

    for (int i = 0; i < sizeof(str); i++)
    {
        printf("%c\n", str[i]);
    }

    char kor[] = "나도코딩";
    printf("%s\n", kor);
    printf("%d\n", sizeof(kor)); // 13
    // 영어 1글자 : 1 byte
    // 한글 1글자 : 2 byte
    // char 크기 : 1 byte

    return 0;
}