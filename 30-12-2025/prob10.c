#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=85&&marks<=100)
    printf("Grade:A");
    else if(marks>=45&&marks<=60)
    printf("Grade:C");
    else 
    printf("invalid");
    return 0;
}