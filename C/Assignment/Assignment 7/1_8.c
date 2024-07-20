#include<stdio.h>
void main(){

    int n1;
    printf("enter size for array 1: ");
    scanf("%d",&n1);

    int n2;
    printf("enter size for array 2: ");
    scanf("%d",&n2);

    int arr1[n1];
    
    printf("enter first array: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

     int arr2[n2];

    printf("enter Second array : ");
    for (int j = 0; j < n2; j++)
    {
        scanf("%d",&arr2[j]);
    }

    int n3 = n1 + n2;
    int merged [n3];
    int i , j ;

    for ( i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
     
    }

    for (j = 0; j < n2; j++)
    {
        merged[i+j] = arr2[j];
     
    }

    printf("Merged array is ");
    for (int k = 0; k < n3; k++)
    {
        printf("%d ",merged[k]);
    }

    

}