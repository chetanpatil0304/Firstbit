#include <stdio.h>
int mystrcmp (char* ,char*);
void main (){

    char str1 [20] = "Heya" ;
    char str2 [20] = "HeyaWelcome" ;


    int res= mystrcmp(str1 ,str2);


    if (res==0){
        printf("Strings are equal");
    }else{
        printf("Strings are unequal");
    }

    printf("\nValue returned by strcmp() is: %d" , res);
}

int mystrcmp(char * str1 ,char * str2){

    int flag = 0 ;

    for (int i = 0 , j=0; str1[i] !='\0' ,str2[j] !='\0'  ; i++,j++){

            if(str1[i] != str2[j]){
                flag = 1 ;
                break ;
            }
        }

        if(flag==0){
            return 0 ;
        }else{
            return 1 ;
        }


    

}