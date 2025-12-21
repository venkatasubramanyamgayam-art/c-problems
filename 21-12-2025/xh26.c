#include <stdio.h>
int main() {
   int age;
   printf("enter the age");
   scanf("%d",&age);
   if(age<13)
   printf("child");
   else if(age<20)
   printf("teen");
   else 
   printf("Adult"); //Your Code goes here!
    
    return 0;
}