#include <stdio.h>

void main (){

    int num = 111;

    int result = palindronenum (num);
     if(result == 1){
        printf("The number is palindrone");
    }else{
        printf("The number is not palindrome");
    }
}
int palindronenum (int num){

    int r=0 , rev=0;

    int temp=num;

    while(num>0){

        r = num %10 ;
        rev = rev * 10 + r ;   
        num = num / 10 ;
         
        
    }

    if(temp==rev){
        return 1;
    }else{
        return 0;
    }
}

    



