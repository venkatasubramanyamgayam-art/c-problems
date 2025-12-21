#include <stdio.h>
int main() {
int a,b;
printf("enter the number");
scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d",a);
    else if(b>a)
    printf("%d",b);
    else 
    printf("invalid");
    return 0;
}