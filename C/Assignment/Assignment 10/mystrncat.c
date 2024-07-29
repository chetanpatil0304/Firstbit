#include <stdio.h>
#include <string.h>

void main(){

  char str[] = "Heya Welcome "; 
    char str2 [] ="Sir";

    int n ;
    printf("Enter the number of characters to concat ");
    scanf("%d",&n);

    mystrncat(str , str2,n);

}

int mystrncat(char * str1 ,char*  str2 , int size){

    int i , j ;


    for(i = 0 ; i<size ; i++);

        for(j=0 ; i<size ;j++,i++){
            str1[i]=str2[j];

        }
        str1[i]='\0';


    
    printf("%s",str1);
    
    

}