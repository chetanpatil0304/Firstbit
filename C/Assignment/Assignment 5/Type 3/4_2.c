#include <stdio.h>
void range_prime ();
void main (){

    int num ;
    printf("Enter Range :");
    scanf("%d",&num);
    range_prime (num);
}

void range_prime (int num){

    int temp = 0;
    for (int i =1 ; i<=num ;i++){
        int flag =0;
        int d =2;

        temp =i;
         for (int d = 2; d <= i / 2; d++){ 

            if (i%d==0){
              flag =1;
              break;
            }
        
    }
    if (flag==0) {
        printf("The prime numbers are : %d\n",i);

    }
    }   

       
}


