#include <stdio.h>
void main (){

    int num=0 , r=0 , temp  ;
    int sum ;

    printf("Enter Range :");
    scanf("%d",&num);

    for (int i =1 ; i<=num ;i++){
        temp = i ;
        sum =0;
        while(temp!=0){

            r = temp %10 ;   
            sum = sum +(r*r*r) ;
            temp = temp / 10 ;
        }  
        if(i==sum){
            printf("%d\n",i);
        }
    }

}