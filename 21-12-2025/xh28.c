#include <stdio.h>
int main() {
   int  num;
   printf("enter the number");
   scanf("%d",&num);
   if(num%2==0)
   printf("number the postive even");
   else if (num%3==0)
   printf("number the negative odd");
   else 
   printf("invalid");
   
   
    return 0;
}