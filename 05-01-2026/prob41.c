#include <stdio.h>
int main() {
    //Your Code goes here!
    
    int arr[] = {-1, 2, -3, 4, 5};
    int n = 5;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

