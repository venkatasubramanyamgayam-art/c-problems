#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i;
    long factorial=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<0)
    printf("factorialof a negative number.\n");
else 
for(i=1;i<=n;i++);
factorial*=i;
printf("factorialof %dis %1d\n,n,factorial");


    return 0;
}