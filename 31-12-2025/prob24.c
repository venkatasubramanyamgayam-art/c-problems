#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,sum=0,remainder;
    printf("enter the integer ");
scanf("%d",&n);
while (n!=0)
remainder=n%10;
sum+=remainder;
n/=10;
printf("sum of digits:%d/n",sum);

    return 0;
}