#include <stdio.h>
int main() {
    //Your Code goes here!
    
    int num, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if (result == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

