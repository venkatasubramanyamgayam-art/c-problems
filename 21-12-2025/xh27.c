#include <stdio.h>
int main() {
  int age;
  printf("enter the age");
  scanf("%d",&age);
  int salary;
  printf("enter the salary");  
  scanf("%d",&salary);
  if(age>=25&&salary>=30000)
  printf("Eligble");
  else
  printf("not eligible");
    
    return 0;
}