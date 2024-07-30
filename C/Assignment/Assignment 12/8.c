#include<stdio.h>
void main(){
    int *arr1 , *arr2;
    int n1,n2;

    printf("Enter the number of elements: ");
    scanf("%d", &n1);

    // Allocate memory for the array
    arr1 = (int *)malloc(n1 * sizeof(int));
    arr2 = (int *)malloc(n2 * sizeof(int));

    if (arr1 == NULL && arr2 == NULL) {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter First array elements: ");

    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

        printf("Enter Second array elements: ");

    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int n3 = n1 + n2;
    int merged [n3];

    mergedarray(arr1 , arr2 ,merged ,n1 , n2 , n3);


}
void mergedarray(int * arr1 ,int * arr2 ,int * merged , int n1 ,int  n2 ,int  n3){


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