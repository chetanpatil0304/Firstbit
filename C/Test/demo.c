#include <stdio.h>
void main (){

    int num=0 , r=0 , temp  ;
    int sum ;

    printf("Enter Range :");
    scanf("%d",&num);

    for (int i =1 ; i<=num ;i++){
        temp = i ;
        printf("Factors of %d:\n ", temp);
        for(int j = 1 ; j <=temp ; j++){
            if(temp%j==0){
            printf(" %d\n",j);
        }
       
    }
        printf("\n");
            }

}