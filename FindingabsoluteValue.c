/*Program To Find Absolue Value Of The Given Number */
#include<stdio.h>
int main(){

    float a;
    printf("Enter The Number ");
    scanf("%f",&a);

    if(a>=0){
        printf("The Absolute Value Of The Number Is : %f",a);
    }
    else{
        printf("The Absolute Value Of The Number Is : %f",-a);
    }
    
  return 0;
}