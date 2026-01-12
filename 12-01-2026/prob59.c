#include <stdio.h>
int main() {
    //Your Code goes here!
    
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Euclid's Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);

    return 0;
}

