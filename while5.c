#include <stdio.h>

int main(void) //같아질 때 까지 반복
{
    int x ,y;

    printf("20이하의 두개의 정수를 입력하시오(작은수, 큰수):");
    scanf("%d%d", &x, &y);

    while( x != y)
    {
        printf("다릅니다.\n");
        x++;
        if( x == y){
            printf("같습니다\n");
            
        }


        
    }
    return 0 ;

}