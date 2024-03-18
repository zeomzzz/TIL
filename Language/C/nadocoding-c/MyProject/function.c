#include <stdio.h>

// 함수 형태 : 반환형 함수이름(전달 값)
// 선언
void p(int num);

int main(void)
{
    // function
    // 계산기

    int num = 2;
    // printf("numdms %d 입니다\n", num);
    p(num);

    // 2+3
    num = num + 3;
    // printf("nun은 %d입니다\n", num); // 5
    p(num);

    // 5-1
    num -= 1;
    // printf("num은 %d입니다\n", num);
    p(num);

    // 4*3
    num *= 3;
    // printf("num은 %d 입니다\n", num);
    p(num);

    // 12 / 6
    num /= 6;
    // printf("num은 %d입니다\n", num);
    p(num);

    return 0;
}

// 정의
void p(int num)
{
    printf("num은 %d 입니다\n", num);
}