#include <stdio.h>
int main() {
    //Your Code goes here!
    int arr[] = {2, 4, 6, 8};
    int n = 4;
    int sum = 0;
    float average;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("%.0f\n", average);
    return 0;
}

    