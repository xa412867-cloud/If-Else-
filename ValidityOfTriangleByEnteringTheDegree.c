/*Program To Finding whether Triangle Is Valid Or Not */
#include<stdio.h>
int main(){

    int t1,t2,t3;
    printf("Enter The First Angle ");
    scanf("%d",&t1);
    printf("Enter The Second Angle ");
    scanf("%d",&t2);
    printf("Enter The Third Angle ");
    scanf("%d",&t3);

    if(t1+t2+t3==180){
        printf("Triangle Is Valid ");
    }
    else{
        printf("Triangle Is Not Valid ");
    }
  return 0;
}