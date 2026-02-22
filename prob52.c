#include <stdio.h>
int main() {
    //Your Code goes here!
    
    
#include <string.h>


    char str[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("palindrome\n");
    else
        printf("not palindrome\n");

    return 0;
}

