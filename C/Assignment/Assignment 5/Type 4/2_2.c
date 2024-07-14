#include <stdio.h>
int greatest ();
void main (){

    int a =1000 ,b =230 ,c =30 ;
    
    int ans = greatest (a,b,c);

    if (ans==0){
        printf("A is greater");
    }else if ( ans==1){
        printf("B is a greater");
    }else{
        printf("C is a greater");
    }
}

int greatest (int a , int b , int c){

    if (a>b && a>c){

        return 0 ;

    }else if (b>c){
        return 1 ;
    }else{
        return 2 ;
    }

    }

