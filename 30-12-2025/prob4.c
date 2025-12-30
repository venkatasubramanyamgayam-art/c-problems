#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    printf("enter the number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    printf("the large number: %d",a);
    else if(b>a&&b>c)
    printf("the large number:%d",b);
    else if(c>a&&c>b)
    printf("the large number:%d",c);
    else 
    printf("invalid");

    return 0;
}