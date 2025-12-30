#include <stdio.h>
int main() {
    //Your Code goes here!
    char letter;
    printf("enter the letter");
    scanf("%d",&letter);
    if(letter>='A'&&letter<='Z')
    printf("Uppercase");
    else if(letter>='a'&&letter<='z')
    printf("Lowercase");
else 
printf("invalid");
    return 0;
}