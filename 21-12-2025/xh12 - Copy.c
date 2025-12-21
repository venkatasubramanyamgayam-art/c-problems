#include <stdio.h>
int main() {
int a;

printf("enter the salary");
scanf("%d",&a);
if(a>=20000)
printf("%d",a+=2000);
else
printf("%d",a+=1000);

    return 0;
}