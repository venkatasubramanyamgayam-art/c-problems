#include <stdio.h>
int main() {
    //Your Code goes here!
    int Y;
    printf("enter the number ");
    scanf("%d",&Y);
    if((Y%4==0 && Y%100!=0) || (Y%400==0))
    printf("LEAP YEAR");
    else 
    printf("NOT LEAP YEAR");

    return 0;
}