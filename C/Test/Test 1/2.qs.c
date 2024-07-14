#include <stdio.h>
int main (){
    int num = 30423 ;
    int sum ;

    int r1 = num % 10 ;
    int q1 = num/10 ;

    int r2 = q1% 10 ;
    int q2 = q1/10;

    sum = r1 + r2 ;

    printf("The sum of last two digit numbers =%d",sum);
}
