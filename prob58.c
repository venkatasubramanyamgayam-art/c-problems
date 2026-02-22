#include <stdio.h>
int main() {
    //Your Code goes here!
    
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}