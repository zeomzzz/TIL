#include <stdio.h>

int main(void)
{
    // if (조건) {  } else {  }
    // int age = 25;
    // if (age >= 20)
    // {
    //     printf("일반인 입니다.");
    // }
    // else
    // {
    //     printf("학생입니다.");
    // }

    int age = 25;
    if (age >= 8 && age <= 13)
    {
        printf("초등학생입니다.\n");
    }
    else if (age >= 14 && age <= 16)
    {
        printf("중학생입니다.\n");
    }
    else if (age >= 17 && age <= 19)
    {
        printf("고등학생입니다.\n");
    }
    else
    {
        printf("학생이 아닌가봐요.\n");
    }

    // break / continue
    // 1번 ~ 30번까지 학생 중 1~5번 까지 조별 발표
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6)
        {
            printf("나머지 학생은 집에 가세요");
            break; // for문 탈출
        }
        printf("%d번 학생은 조별활동 준비를 하세요.\n", i);
    }

    // 1번 ~ 30번까지 학생 중 7번 제외하고 6~10번 조별 발표
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            if (i == 7)
            {
                printf("%d번 학생은 결석입니다.\ㅜ", i);
                continue; // 이후의 문장 실행하지 않고 다음 반복으로 넘어감
            }
            printf("%d번 학생은 조별활동 준비를 하세요.\n", i);
        }
    }

    return 0;
}