/*Program To Implement The Policy Of Company  */
#include<stdio.h>
int main(){

    int order,stock,credit;
    printf("Enter Order : ");
    scanf("%d",&order);
    printf("Enter Stock : ");
    scanf("%d",&stock);
    printf("For Credit Ok Enter '0'\nFor Credit To Be Not Okay Enter '1' ");
    scanf("%d",&credit);

    if(credit==1){
        printf("Do Not supply. Send Him Intimation ");
    }
    else{
        if( (order)<=(stock) ){
            printf("Supply Has Requirement ");
        }
        else{
            printf("%d Is Supplied and %d Balance Will Be Shipped ",stock,order-stock);
        }
    }

   return 0;
}