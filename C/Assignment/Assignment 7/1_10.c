 #include <stdio.h>
 #include <string.h>

 void main(){
    
    int n;
    printf("enter size for array : ");
    scanf("%d",&n);


    int arr[n];
    printf("enter first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int temp;

    for (int i=0 ; i<n ; i++){

        for(int j=i+1; j<n ; j++){

           if(arr[i]>arr[j]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }

        }
        
    }

    printf("Array after sorting");
    for(int i=0; i <n ; i++){
        printf(" %d",arr[i]);
    }



 }