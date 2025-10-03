/*Program To Find The Efficiency Of The Workers  */
#include<stdio.h>
int main(){

    float t;
    printf("The Time Taken By Worker To Finish Their Work : ");
    scanf("%f",&t);

    if(t>=2 && t<=3){
        printf("Worker Is Highly Eficient ");
    }
    if(t>3 && t<=4){
        printf("Worker Is Need To Improve Their Speed ");
    }
    if(t>4 && t<=5){
        printf("Worker Is Ordred To Take Training For Improve Their Speed ");
    }
    if(t>5){
        printf("Worker Ordered To Leave The Company ");
    }

    return 0;
}