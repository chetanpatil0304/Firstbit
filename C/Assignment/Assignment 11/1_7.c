#include <stdio.h>
#include <string.h>

int main(){

    char str [100] ;
    printf("Enter the String : ");
    gets(str);

    oddindex(str);
   

}

oddindex(char * str){

    int length = strlen(str);

    int count=0;

    for(int i = 0 ; i <length ; i++ ){

        if(str[i]%2==0){

          str[i]=str[i+1];

        }
 
    }
     printf("%s",str);


           
   
}