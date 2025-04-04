
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the values");
    scanf("%d %d",&a,&b);
    printf("The values are a=%d and b=%d",a,b);
    
    //swapping without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n The values after swapping is a=%d and b=%d",a,b);
}
   