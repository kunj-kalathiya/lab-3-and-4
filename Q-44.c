// write program to calculate electircity bill amount paid by the customer
#include <stdio.h>
int main(){
    int units;
    float bill_amount;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    if(units <= 200){
        bill_amount = units * 0.5;
    }
    else if(units > 200 && units <= 400){
        bill_amount= 100+ units*0.65;
    }
    else if(units > 400 && units <= 600){
        bill_amount = 230+ units*0.80;
    }
    else {
        bill_amount = 425+ units*1.25;
    }
    printf("Electricity Bill Amount: %f\n", bill_amount);
    return 0;
}