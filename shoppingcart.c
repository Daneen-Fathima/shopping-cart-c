#include <stdio.h>
int main()
{
    char item[60]= "";
    float price= 0.0f;
    int quantity= 0;
    char currency[]= "₹";
    float total= 0.0f;
printf("What item would you like to buy?:");
fgets(item,60,stdin);
printf("What is the price for each:");
scanf("%f", &price);
printf("How many would you like:");
scanf("%d", &quantity);
total=price*quantity;
printf("%f", &price);
return 0;




}