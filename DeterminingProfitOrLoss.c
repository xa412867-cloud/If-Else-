/*Program To Finding The Profit and Loss */
#include<stdio.h>
int main(){

    float cp,sp;
    printf("Enter Cost Price Of An Item : ");
    scanf("%f",&cp);
    printf("Enter Selling Price Of An Item : ");
    scanf("%f",&sp);

    if(sp>cp){
        printf("Profit Is %f",sp-cp);
    }
    else{
        if(sp<cp){
            printf("Loss Is %f",cp-sp);
        }
        else{
            printf("No Profit No Loss ");
        }
    }


    return 0;
}