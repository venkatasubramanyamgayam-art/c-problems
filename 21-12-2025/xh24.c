#include <stdio.h>
int main() {
    //Your Code goes here!
    int bill;
    printf("enter the bill");
    scanf("%d",&bill);
    int discount;
    if(bill>=5000)
    discount = bill*10 /100;
    else 
    discount = bill*5/100;

    printf("%d", bill - discount);
    
    return 0;
}