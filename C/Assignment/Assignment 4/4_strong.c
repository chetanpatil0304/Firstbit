#include <stdio.h>
void  main (){

    
    int num ;
    printf("Enter Range :");
    scanf("%d",&num);

    for (int k = 1; k <= num; k++) {
        int sum = 0;
        int temp = k;
        
        // Calculate sum of factorials of digits
        while (temp > 0) {
            int r = temp % 10;

            int fact = 1;
    for (int i = 1; i <= k; i++) {
        fact *= i;
    }
            sum += fact ;
            temp /= 10;
        }


     if (sum == temp){
        printf ("%d",temp);
     }

}
}