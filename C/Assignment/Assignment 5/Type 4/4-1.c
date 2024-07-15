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

  int temp =num; int sum =0;
  
int count =0;
while (temp!=0)
{
    count++;
    temp= temp/10;
}
temp = num;
while (temp!=0)
{
    int rem = temp %10;
    int ans =1;
    for (int i = 0; i < count; i++)
    {
        ans*=rem;
    }
    sum+=ans;
    temp/=10;
    
}
return sum==num;



}