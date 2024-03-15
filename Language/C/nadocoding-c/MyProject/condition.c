#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
                printf("%d번 학생은 결석입니다.\n", i);
                continue; // 이후의 문장 실행하지 않고 다음 반복으로 넘어감
            }
            printf("%d번 학생은 조별활동 준비를 하세요.\n", i);
        }
    }

    // && ||
    int a = 10;
    int b = 10;
    int c = 12;
    int d = 13;
    if (a == b || c == d)
    {
        printf("a와 b, 혹은 c와 d가 같습니다.\n");
    }
    else
    {
        printf("값이 서로 다르네요\n");
    }

    // switch case
    // 가위 0 바위 1 보 2
    srand(time(NULL));
    int i = rand() % 3;
    // if (i == 0)
    // {
    //     printf("가위\n");
    // }
    // else if (i == 1)
    // {
    //     printf("바위\n");
    // }
    // else if (i == 2)
    // {
    //     printf("보\n");
    // }
    // else
    // {
    //     printf("몰라요\n");
    // }

    switch (i)
    {
    case 0:
        printf("가위\n");
        break;
    case 1:
        printf("바위\n");
        break;
    case 2:
        printf("보\n");
        break;
    default: // break 넣지 않으면 아래의 모든 문장 실행 -> default도 실행
        printf("몰라요\n");
    }

    age = 25;
    switch (age)
    {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        printf("초등학생입니다.\n");
        break;
    case 14:
    case 15:
    case 16:
        printf("중학생입니다.\n");
        break;
    case 17:
    case 18:
    case 19:
        printf("고등학생입니다.\n");
        break;
    default:
        printf("학생이 아닌가봐요\n");
        break;
    }

    return 0;
}