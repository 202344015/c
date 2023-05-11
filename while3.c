#include <stdio.h>

int main(void) // 홀수합 구하기
{
    int x=1, y, sum;

    printf("정수를 입력하시오:"); 
    scanf("%d", &y);
   
    sum = 0;

    while( x <= y )
    {
       sum += x;
       x = x+2;   
       
        
        
        
    }
    printf("1부터 %d까지의 합은 %d입니다.", y, sum);

    return 0;
}

