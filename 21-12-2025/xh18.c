#include <stdio.h>
int main() {
   int cost;
   int selling;

   printf("enter the cost");
   scanf("%d",&cost);
   printf("entern the selling");
   scanf("%d",&selling);
   if(cost>selling)
   printf("loss");
   else if(selling<cost)
   printf("profit");
   else 
   printf("invalid"); //Your Code goes here!
    
    return 0;
}