#include <stdio.h>
int main() {
    //Your Code goes here!
    int digit;
    printf("enter the number ");
    scanf("%d",&digit);
    if(digit>=1&&digit<=9)
    printf("single digit");
    else if(digit>=-9&&digit<=-1)
    printf("single digit");
    else 
    printf("Not single digit");
    
    return 0;
}