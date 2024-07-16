#include <stdio.h>
#include<math.h>


void main (){

    int base ;
    printf("Enter base ");
    scanf("%d",&base);

    int exponent ;
    printf("Enter exponent");
    scanf("%d",&exponent);

    int result = powerfun(base,exponent);

    printf("%d",result);

}

int powerfun(int base , int exponent){

    int power=1;

    for (int i = 0 ; i<=exponent ; i++){
        power=power*base ;
     
    }
    return power ;
    
}