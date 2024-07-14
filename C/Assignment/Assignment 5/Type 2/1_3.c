#include <stdio.h>
int sum ();
int reverse ();
int main (){

    
    printf("The sum of digits is %d\n", sum () );
    printf("The reverse of digit  is %d\n", reverse () );
    
}

int sum (){
    int num =125 ;

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

int reverse (){
    int num =125 ;

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