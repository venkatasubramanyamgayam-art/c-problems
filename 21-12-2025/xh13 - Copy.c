#include <stdio.h>
int main() {
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a%2==0&&a%3==0)
    printf("yes");
    else 
    printf("no");
    
    return 0;
}