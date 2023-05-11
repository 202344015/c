#include <stdio.h>

int main(void) // 2의 배수만 구하기
{
    int x, y = 1;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    while( y <= x)
    {
        if( y % 2 ==0 )

        printf("%d", y);
        y++;
    }
       


    return 0;

   
}



