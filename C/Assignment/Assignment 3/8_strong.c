#include <stdio.h>
int main (){

    int num = 145;
    int temp = num ;
    int sum = 0 ;
    int fact =1,r, d ;

     while(num!=0){ 
       fact=1,d=1;
       //
        r = num %10 ;   

        while(d<=r){
            fact = fact * d;
            d++ ;
        }
        

        sum = sum + fact ;
        num = num / 10 ; 
    
     }

     if (sum == temp){
        printf ("Its is a strong number");
     }else{
        printf("It is not a strong number");
     }

}
