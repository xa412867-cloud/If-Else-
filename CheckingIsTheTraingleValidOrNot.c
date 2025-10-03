/*Program To Check Whether the Given Sides Form Triangle Or Not */
#include<stdio.h>
int main(){

    float a,b,c;
    printf("Enter 1st Side ");
    scanf("%f",&a);
    printf("Enter 2nd Side ");
    scanf("%f",&b);
    printf("Enter 3rd Side ");
    scanf("%f",&c);

    if((a+b>c) && (a+c>b) && (b+c)>a) printf("Entered Sides Form Triangle ");
    else printf("Entered Side Does Not Form Triangle ");
    return 0;
}