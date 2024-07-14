#include <stdio.h>
void sum_reverse ();
void main (){

    int num =125 ;
    sum_reverse(num );

}
void sum_reverse (int num){
    

    int r1 = num%10 ;
    int q1 = num/10 ;

    int r2 = q1%10 ;
    int q2 = q1/10 ;

    int r3 = q2%10 ;
    int q3 = q2/10 ;
    
    if(q3==0){

        int sum = r1 +r2 + r3;
        int rev = r1 *100 + r2*10 +r3 ;
        printf("The sum of digits is %d and reverse is %d",sum,rev);

    } 

}