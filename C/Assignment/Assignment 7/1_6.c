#include <stdio.h>
void main (){

    int n ;

    printf("Enter thr number of elements in array : \n");
    scanf("%d",&n);

    int arr [n];
    printf("Enter Array Elements:\n"); 
    for (int i = 0 ; i < n ; i ++)
    {
        scanf("%d",&arr[i]);
                                 
    }

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
