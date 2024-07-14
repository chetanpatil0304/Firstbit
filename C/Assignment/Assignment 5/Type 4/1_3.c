#include <stdio.h>
int sum ();
int reverse ();
int main (){

    int num =125 ;

    
    printf("The sum of digits is %d\n", sum (num) );
    printf("The reverse of digit  is %d\n", reverse (num) );
    
}

int sum (int num){

    int r1 = num%10 ;
    int q1 = num/10 ;

    int r2 = q1%10 ;
    int q2 = q1/10 ;

    int r3 = q2%10 ;
    int q3 = q2/10 ;
    
    if(q3==0){

        int sum = r1 +r2 + r3;
        return sum ;
    } 
}

int reverse (int num){
    

    int r1 = num%10 ;
    int q1 = num/10 ;

    int r2 = q1%10 ;
    int q2 = q1/10 ;

    int r3 = q2%10 ;
    int q3 = q2/10 ;
    
    if(q3==0){

        int rev = r1 *100 + r2*10 +r3 ;
        return rev ;

    } 
}