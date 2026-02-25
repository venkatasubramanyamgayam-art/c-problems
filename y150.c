
   #include <stdio.h>

int main() {
    int N, i,multi ;
 printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("multiplication numbers 1 %d\n",N);
for (i = 1; i<= N; i++) 
       multi=i*multi;
        printf("%d", multi);
    

    return 0;
}

    
