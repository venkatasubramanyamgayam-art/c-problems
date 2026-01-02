#include <stdio.h>
int main() {
    //Your Code goes here!
     int n, i;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr;

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[0]);
    }

    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[0];
        }
    }

    printf("Output: %d\n", max);

    return 0;
}