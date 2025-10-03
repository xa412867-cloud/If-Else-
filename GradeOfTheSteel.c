/*Program To Find The Grade Of The Steel*/
#include<stdio.h>
int main(){

    int h,ts;
    printf("Enter Hardness ");
    scanf("%d",&h);
    float cc;
    printf("Enter Carbon Content ");
    scanf("%f",&cc);
    printf("Enter Tensile Srenght ");
    scanf("%d",&ts);

    
    if((h>50) && (cc<0.7) && (ts>5600)){
        printf("Grade Is 10 ");
    }
    else if((h>50) && (cc<0.7)){
        printf("Grade Is 9 ");
    }
    else if((cc<0.7) && (ts>5600)){
        printf("Grade Is 8 ");
    }
    else if((h>50) && (ts>5600)) {
        printf("Grade Is 7 ");
    }
    else if((h>50) || (cc<0.7) || (ts>5600)){
        printf("Grade Is 6 ");
    }
    else{
        printf("Grade Is 5 ");
    }
    
    return 0;
}