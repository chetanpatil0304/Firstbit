#include <stdio.h>

void range_armstrong (int , int)
int main (){

    int num=0 , r=0   ;
    

    printf("Enter Range :");
    scanf("%d",&num);
    range_armstrong (num,r);

    return 0 ;
}
void range_armstrong (int num , int r  ){

    int sum , temp;

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