#include <stdio.h>

int main(void)
{
    int total, money;
    int m1000, m500, m100, change;

    printf("물건 값을 입력하시오");
    scanf("%d", &total);

    printf("투입한 금액을 입력하시오");
    scanf("%d", &money);
    change=money-total;

    printf("거스름돈은 다음과 같습니다.");

    m1000=change/1000; 
    change=change%1000;

    m500= change/500;
    change=change%500; 

    m100= change/100;
    change=change%100;

    printf("\n천원권: %d장\n", m1000);
    printf("오백원 동전: %d개\n", m500);
    printf("백원 동전: %d개\n", m100);
    return 0;
   }