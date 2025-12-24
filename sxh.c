#include <stdio.h>
int main() {
    int totalchocolates,consumptionperday,minimumdays,planeddays,requiredchocolates;
    printf("enter the total number of chocolates:");
    scanf("%d",&totalchocolates);
    printf("enter the number of chocolates consumed per day:");
    scanf("%d",&consumptionperday);
    printf("enter the number of days ram plans to eat:");
    scanf("%d",&planeddays);
    requiredchocolates=consumptionperday*planeddays;
    if (totalchocolates>=requiredchocolates){
        printf("1\n");
    } else {
        printf("0\n");
    minimumdays=totalchocolates/consumptionperday;
        printf("%d\n",minimumdays);
    }
    
    return 0;
}