#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_random(void)
{
    // int num = rand() % 3; // 0~2 중 하나 뽑기
    printf("난수 초기화 이전..\n"); // -> 실행할 때마다 똑같은 결과 반환
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10);
    }
    srand(time(NULL)); // 난수 초기화(필수!!!) -> 실행할 때마다 다른 결과 반환
    printf("\n\n난수 초기화 후..\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10);
    }

    return 0;
}
