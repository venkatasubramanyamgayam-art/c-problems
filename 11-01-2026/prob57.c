
    #include <stdio.h>

int factorial(int n)
//Your Code goes here!
 {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == original)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}

    