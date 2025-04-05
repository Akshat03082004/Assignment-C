
#include <stdio.h>

int main()
{
 int a,b,c;
 
 printf("Enter the First Value ");
 scanf("%d",&a);
 
 printf("Enter the Second Value ");
 scanf("%d",&b);
 
 printf("Enter the Third Value ");
 scanf("%d",&c);
 
 int i=1;
 
 while(i<=10){
     printf("%d x %d=%d  %d x %d=%d  %d x %d=%d\n ",a,i,a*i, b,i,b*i, c,i,c*i);
     i++;
 }
}