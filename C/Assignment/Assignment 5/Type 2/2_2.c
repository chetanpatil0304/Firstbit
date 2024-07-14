#include <stdio.h>
int greatest ();
void main (){
    
    int ans = greatest ();

    if (ans==0){
        printf("A is greater");
    }else if ( ans==1){
        printf("B is a greater");
    }else{
        printf("C is a greater");
    }
}

int greatest (){

    int a =1000 ,b =230 ,c =30 ;

    if (a>b && a>c){

        return 0 ;

    }else if (b>c){
        return 1 ;
    }else{
        return 2 ;
    }

    }

