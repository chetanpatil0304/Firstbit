#include <stdio.h>
int main (){

    int num = 111 ;

    int r=0 , rev=0;

    int temp=num;

    while(num>0){

        r = num %10 ;
        rev = rev * 10 + r ;   
        num = num / 10 ;
        //rev = r *100 + r*10 +r ;
        //rev = num * 10 +
         
        
    }

    if(temp==rev){
        printf("The number is palindrone");
    }else{
        printf("The number is not palindrome");
    }
}

    



