#include <stdio.h>
int main() {
    //Your Code goes here!
    int let;
    printf("enter the letter");
    scanf("%d",&let);
    if(let=='a'||let=='e'||let=='i'||let=='o'||let=='u')
    printf("Vowel");
    else 
    printf("Not vowel");

    return 0;
}