#include <stdio.h>
#include <string.h>

typedef struct{
    int id ;
    char name [100];
    float salary ;
    int commision ;
}Hr;

void display(Hr*,int);
void store(Hr*,int);

int main() {
    Hr hrArray[2];

    store(hrArray,2);
    display(hrArray,2);

    return 0;
}

void store(Hr * hrArr , int size) {

    for(int i=0 ;i<size ;i++){

        printf("Enter ID  : \n");
        scanf("%d",&hrArr[i].id);

        printf("Enter Name : \n");
        scanf("%s",hrArr[i].name);

        printf("Enter salary: \n");
        scanf("%f",&hrArr[i].salary);

        printf("Enter Commission: \n");
        scanf("%d",&hrArr[i].commision);

    }

}

void display(Hr* hrArr , int size) {

    for(int i=0 ; i<size ; i++){

        printf("--------------------\n");
        printf("ID : %d \n",hrArr[i].id);
        printf("Name:  %s \n",hrArr[i].name);
        printf("Salary: %f\n",hrArr[i].salary);
        printf("Commision: %d\n",hrArr[i].commision);
        printf("--------------------\n");

    }


}
