#include <stdio.h>
int main() {
    //Your Code goes here!
    long long binary;
    int decimal = 0, base = 1, digit;
    int valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;

        if (digit == 0 || digit == 1) {
            decimal = decimal + digit * base;
            base = base * 2;
        } else {
            valid = 0;
            break;
        }

        binary = binary / 10;
    }

    if (valid == 1) {
        printf("Decimal equivalent: %d\n", decimal);
    } else {
        printf("Invalid binary number.\n");
    }
    return 0;
}