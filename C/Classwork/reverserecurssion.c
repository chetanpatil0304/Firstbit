#include <stdio.h>
void main(){
    int a[]=1;
    func1(a);
}
func1(a){
    printf("%d",a);
    
    if(a==5){
        return 0 ;
    }
    a++;
    func1(a); 
}