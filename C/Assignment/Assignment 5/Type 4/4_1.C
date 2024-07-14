#include <stdio.h>
int arm_strongrange(int);

void main() {
    int range;

    printf("Enter a range: ");
    scanf("%d", &range);

    for (int num = 1; num <= range; num++) {
        if (arm_strongrange(num)) {
            printf("%d\n", num);
        }
    }

}

int arm_strongrange (int num ){

    int cnt =0 , temp=num , sum = 0 ;

    while (temp !=0){
        cnt ++ ;
        temp =temp/10 ;
    }
    temp = num ;
    while (temp != 0){
        int rem = temp%10;
        sum=sum +cnt;
        temp=temp/10;

    }


    return 1 ;
}