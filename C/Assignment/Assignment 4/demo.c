#include <stdio.h>

void main () {


    int num ;
    printf("Enter Range :");
    scanf("%d",&num);
    int fact =1,r, d ;

    for (int i = 0 ; i <= num ; i++){
        int sum = 0 ;
        
       while(i){ 

       fact=1,d=1;

        r = i %10 ;   
        while(d<=r){
            fact = fact * r;
            r-- ;
        }
        

        sum = sum + fact ;
        i = i / 10 ; 
    
     }
     if (sum == i){
         printf ("%d",i);
    }
}
}