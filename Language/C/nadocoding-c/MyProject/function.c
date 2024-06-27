#include <stdio.h>

// 함수 형태 : 반환형 함수이름(전달 값)
// 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // total개에서 ate개 먹고 남은 수 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
    // function
    // 계산기

    int num = 2;
    // printf("numdms %d 입니다\n", num);
    p(num);

    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = div(num, 6);
    p(num);

    // // 2+3
    // num = num + 3;
    // // printf("nun은 %d입니다\n", num); // 5
    // p(num);

    // // 5-1
    // num -= 1;
    // // printf("num은 %d입니다\n", num);
    // p(num);

    // // 4*3
    // num *= 3;
    // // printf("num은 %d 입니다\n", num);
    // p(num);

    // // 12 / 6
    // num /= 6;
    // // printf("num은 %d입니다\n", num);
    // p(num);

    // // 함수 종류
    // // 반환값이 없는 함수
    // function_without_return();

    // // 반환값이 있는 함수
    // int ret = function_with_return();
    // p(ret);

    // // 전달값이 없는 함수
    // function_without_params();

    // // 전달값이 있는 함수
    // function_with_params(1, 2, 3);

    // // 반환값과 전달값이 있는 함수
    // int ret2 = apple(5, 2); // 5개의 사과 중에서 2개를 먹음
    // printf("사과 5개 중에 2개를 먹으면 %d개가 남아요\n", ret2);
    // printf("사과 %d개 중에 %d개를 먹으면 %d개가 남아요\n", 10, 4, apple(10, 4));

    return 0;
}

// 정의
void p(int num)
{
    printf("num은 %d 입니다\n", num);
}

void function_without_return()
{
    printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

void function_without_params()
{
    printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다.", num1, num2, num3);
}

int apple(int total, int ate)
{
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return total - ate;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return num1 / num2;
}