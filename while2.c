#include <stdio.h>

int main (void) // 남은값 구하기
{
    int x,y,z;
    y = 1;
    z = 50;

    printf("정수를 입력하시오.");
    scanf("%d", &x);   

    while( y <= x)
    {
        z -= y;
        y++;
    }
        printf("남은 값은 %d입니다.", z);

        return 0;



}