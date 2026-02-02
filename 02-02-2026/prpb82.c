#include <stdio.h>
int main() {
    //Your Code goes here!
    #include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50], current[50];
    int i = 0, j = 0;
    int maxLen = 0;

    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) 
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            current[j++] = sentence[i];
        } else {
                current[j] = '\0';
            if (j > maxLen) {
    maxLen = j;
                strcpy(longest, current);
  }
  j = 0;
    
    
    
    current[j] = '\0';
    if (j > maxLen) {
        strcpy(longest, current);
        maxLen = j;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

    