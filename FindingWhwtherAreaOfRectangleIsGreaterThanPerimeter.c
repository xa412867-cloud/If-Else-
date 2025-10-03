/*Program To Determine Whether The Area Of The Given Sides Of The Rectangle Is Greater Than Its Perimeter Or Not */
#include<stdio.h>
int main(){

    float l,b,a,p;
    printf("Enter The Lenght Of The Rectangle Is : ");
    scanf("%f",&l);
    printf("Enter The Breadth Of The Rectangle Is : ");
    scanf("%f",&b);

    a=l*b;
    p=2*(l+b);
    if(a>p){
        printf("Area Of The Rectangle Is Greater Than The Perimeter ");
    }
    else{
        printf("Area Of The Rectangle Is Not Greater Than The Perimeter ");
    }

  return 0;
}