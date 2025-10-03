/*Program To Find Whether The Year Is Leap Or Not using Ternary Operator  */
#include<stdio.h>
int main(){

    int y;
    printf("Enter The Year : ");
    scanf("%d",&y);

    ((y%400==0)||((y%4==0) && (y%100!=0)))?printf("Year Is A Leap Year "):printf("Year Is Not A Leap Year ");

    return 0;
}