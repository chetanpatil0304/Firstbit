#include <stdio.h>
void strong ();
void main (){
    strong ();
}
void strong  (){
    int num = 145;
    int temp = num ;
    int sum = 0 ;
    int fact =1,r, d ;

     while(num){ 
       fact=1,d=1;
       //
        r = num %10 ;   

        while(d<=r){
            fact = fact * r;
            r-- ;
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