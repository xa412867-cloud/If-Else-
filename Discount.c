/*Program To Find Total Expense If Their Is Discont Not Purchasing More Than 1000 Quantity */
#include<stdio.h>
int main(){

    int qty,dis=0;
    float r,tot;

    printf("Enter Quantity ");
    scanf("%d",&qty);
    printf("Enter Rate ");
    scanf("%f",&r);

    if(qty>1000){
        dis=10;
    }

    tot=(qty*r)-(qty*r*dis)/100;
    printf("The Total Expense Is : %f",tot);

    return 0;
}