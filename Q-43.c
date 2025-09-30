// write a program to calculate commission for a sales
#include <stdio.h>
int main(){
    float sales, commission;
    printf("Enter sales amount: ");
    scanf("%f", &sales);
    if(sales <= 500){
        commission = sales * 0.05;
    }
    else if(sales >= 500 && sales < 2000){
        commission = sales * 0.10+35;
    }
     else if(sales >= 2000 && sales < 5000){
        commission = sales * 0.12+185;
    }
    else {
        commission = sales * 0.125;
    }
    printf("Commission: %f\n", commission);
    return 0;
}