
#include <stdio.h>

int main()
{
   int n,k;
   printf("Enter the value of n ");
   scanf("%d",&n);
   
   printf("Enter number of rotations ");
   scanf("%d",&k);
   
   int tn=n;
   int count=0;
   while(tn>0)
   {
       count++;
       tn=tn/10;
   }
   
   int power=1;
   int b=count-1;
   while(b>0)
   {
       power=power*10;
       b--;
   } 
   printf("num = %d and power = %d" ,n,power);
   
   
   while(k>0){
       n=n%10*power+n/10;
       k--;
   }
   printf("\nnum is %d",n);
}
