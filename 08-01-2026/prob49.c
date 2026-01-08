
    #include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "abc";
    char str2[50] = "abc";

    if (strcmp(str1, str2) == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}

    