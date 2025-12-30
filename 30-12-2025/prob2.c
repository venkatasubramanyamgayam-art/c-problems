#include <stdio.h>
int main() {
    //Your Code goes here!
    int digit;
    printf("enter the number ");
    scanf("%d",&digit);
    if(digit>=1&&digit<=9)
    printf("positive");
    else if(digit>=-9&&digit<=-1)
    printf("negative");
    else 
    printf("invalid");
    
    return 0;
}