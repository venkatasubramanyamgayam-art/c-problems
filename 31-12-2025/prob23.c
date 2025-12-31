#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,reversed =0,remainder;
    printf("enetr the integer");
    scanf("%d",&n);
    while(n!=0)
    remainder=n%10;
    reversed=reversed*10+remainder;
    n/=10;
    printf("reversed number:%d\n",reversed);
    return 0;
}