#include <stdio.h>
int main() {
    //Your Code goes here!

    int arr[] = {10, 25, 5, 40, 30};
    int n = 5;
    int largest, secondLargest;

    largest = secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element is: %d\n", secondLargest);
    return 0;
}

    