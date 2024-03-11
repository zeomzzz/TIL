#include <stdio.h>

int main(void)
{
    printf("Hello World\n");

    // // ++
    // int a = 10;
    // printf("a는 %d\n", a);
    // a++;
    // printf("a는 %d\n", a);
    // a++;
    // printf("a는 %d\n", a);

    // int b = 20;
    // printf("b는 %d\n", ++b); // 20
    // printf("b는 %d\n", b++); // 21
    // printf("b는 %d\n", b);   // 22

    int c = 1;
    printf("Hello World %d\n", c++);

    // for
    for (int i = 1; i <= 10; i++)
    {
        printf("Hello World %d\n", i);
    }

    int a = 1;
    // while
    while (a <= 10)
    {
        printf("Hello World %d\n", a++);
    }

    // do while
    int b = 1;
    do
    {
        printf("Hello World %d\n", b++);
    } while (b <= 10);

    // 2중 반복문
    for (int i = 1; i <= 3; i++)
    {
        printf("첫 번째 반복문 : %d\n", i);

        for (int j = 1; j <= 5; j++)
        {
            printf("    두 번째 반복문 : %d\n", j);
        }
    }

    // 구구단
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("   %d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}