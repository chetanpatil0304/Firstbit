#include <stdio.h>
#include <string.h>
int main() {
    int *arr;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter array elements: ");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    Primenum(arr,size);

  

    return 0;
}

void  Primenum(int *arr , int n) {
   printf("Prime numbers in array are : \n");

    for(int i = 0 ; i< n ; i++){
        int num = arr[i];

        int flag = 1;


        if(num<=1){
            flag = 0 ;

        }else {


            for (int j = 2 ;  j * j <= num ; j++){

                if (num % j ==0){
                    flag = 0 ;
                    break;
                }
            }
        }

        if (flag){
            printf("%d\n",num);
        }
    }


}


