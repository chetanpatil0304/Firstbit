#include <stdio.h>
#include<string.h>
int main () {

    char str1 [100];
    printf("Enter the First String : ");
    scanf("%s",&str1);

    char str2 [100];
    printf("Enter the Second String : ");
    scanf("%s",&str2);

    int result = largeString(str1,str2);

    if(result==0){
        printf("Both String having same length ");
    }else if (result == 1){
        printf("Second String is larger than first string");
    }else {
        printf("First String is larger than second string");
    }

    return 0;

}

int largeString(char * str1 , char * str2){

    int countstr1=0;

    for(int i=0 ; i <str1[i]!='\0' ; i++){

        str1[i]=countstr1++;
    }

    int countstr2=0;

    for(int i=0 ; i <str2[i]!='\0' ; i++){

        str2[i]=countstr2++;
    }

    if(countstr1==countstr2){
        return 0;
    }else if (countstr1<countstr2){
        return 1;
    }else{
        return -1;
    }


    
}