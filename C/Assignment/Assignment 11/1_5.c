#include <stdio.h>
#include <string.h>

void main (){

    char str [100];
    printf("Enter the Strings: ");
    gets(str);

    int length =strlen(str);


    int count = 0 ;

    for (int i = 0 ; i <length ; i++){

        strlwr(str);

        if(str[i]=='a' || str[i] == 'e'  || str[i]=='i' || str[i] == 'o' || str[i] == 'u'){
            count++ ;
        }

    }
    printf("The Number of Vowels are %d",count);
    

}