
#include <stdio.h>

int main()
{
   char ch;
   int n1,n2,ans;
   printf("Press a for addition");
   printf("\nPress s for subtraction");
   printf("\nPress m for multiply");
   printf("\nPress d for divison");
   printf("\n\nEnter the character\n");
   scanf("%c",&ch);
   if(ch=='a'){
       printf("Enter the numbers");
       scanf("%d %d",&n1,&n2);
       ans=n1+n2;
       printf("The ans is = %d",ans);
 }
     else if(ch=='s'){
       printf("Enter the numbers");
       scanf("%d %d",&n1,&n2);
       ans=n1-n2;
       printf("The ans is = %d",ans);
 }
     else if(ch=='m'){
       printf("Enter the numbers");
       scanf("%d %d",&n1,&n2);
       ans=n1*n2;
       printf("The ans is = %d",ans);
 }
     else if(ch=='d'){
       printf("Enter the numbers");
       scanf("%d %d",&n1,&n2);
       ans=n1/n2;
       printf("The ans is = %d",ans);
 }
 else {
     printf("Please select Valid Character");
 }
}



