#include <stdio.h>
void range_perfect ();
void main (){

    range_perfect (); 
}

void range_perfect(){
    int num ;
    printf("Enter Range :");
    scanf("%d",&num);
    
    for(int k = 1 ; k <=num ; k++ )
    {
        int perf= 0 ;
        for (int i = 1 ; i <=( k/2) ; i++)
        {
        
            if (k%i==0){
            perf =perf + i;

        }

        }

    if (perf==k){
      
         printf("%d\n",k);

    }
    }
}