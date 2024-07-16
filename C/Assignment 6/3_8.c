#include <stdio.h>
void main (){

    int num = 145;
    int temp = num ;
    int sum = 0 ;
    strong (&num,&temp,&sum);
}
void strong  (int *num , int *temp ,int *sum){
  
    int fact =1,r, d ;

     while(*num){ 
       fact=1,d=1;
       //
        r = *num %10 ;   

        while(d<=r){
            fact = fact * r;
            r-- ;
        }
        

        *sum = *sum + fact ;
        *num = *num / 10 ; 
    
     }

     if (*sum == *temp){
        printf ("Its is a strong number");
     }else{
        printf("It is not a strong number");
     }

}