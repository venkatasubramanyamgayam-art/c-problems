#include <stdio.h>
int main() {
    //Your Code goes here!
    int n, i;
    char slash;
    scanf("%d%c", &n, &slash);
    int arr; 
    for (i = 0; i < n; i++) {
        char digit_char;
        scanf("%c", &digit_char);
        arr[i] = digit_char - '0';
    }

    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}