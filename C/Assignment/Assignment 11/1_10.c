#include <stdio.h>
#include <string.h>

int main ( ){

    char str [100];
    printf("Enter The String :");
    scanf("%s",&str);

    int ans = palindronestring(str);

    if(ans==1){
        printf("The String is palindrome");
    }else{
        printf("The String is not palindrome");
    }


    return 0 ;
}

 int palindronestring(char *str){

    int length =strlen(str);

    for(int i =0 , j =length-1 ; i<j ; i++ ,j--){

        if(str[i]!=str[j]){
        return 0 ;
        }
    
    }


 }