#include <stdio.h>
#include <string.h>
void main (){

    char str1 [20] = "Heya" ;
    char str2 [20] = "Heya Welcome" ;

    int n ;
    printf("Enter the number of characters to compare ");
    scanf("%d",&n);

    int res=strncmp (str1 ,str2, n);

    // Stings are same = 0
    //first string is greater than second string = 1
    // First string is lesser than second string = -1


    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");

    printf("\nValue returned by strcmp() is: %d" , res);
}

mystrncmp(char * str1 ,char * str2, int n){

    for(int i = 0 ; i<n ; i++){

        for(int j=0 ; j<n ; j++)

        if(str1[i]==str2[j]){
            return 0 ;
        }
    }

}