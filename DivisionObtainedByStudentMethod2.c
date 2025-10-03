/*Program To Calculate The Division Of The Student Via Multiple If Statments */
#include<stdio.h>
int main(){

   int m1,m2,m3,m4,m5;
    printf("Enter Marks In 1st Subject ");
    scanf("%d",&m1);
    printf("Enter Marks In 2nd Subject ");
    scanf("%d",&m2);
    printf("Enter Marks In 3rd Subject ");
    scanf("%d",&m3);
    printf("Enter Marks In 4th Subject ");
    scanf("%d",&m4);
    printf("Enter Marks In 5th Subject ");
    scanf("%d",&m5);

    float p;
    p=(m1+m2+m3+m4+m5)/5;

    if(p>=60){
        printf("First Grade ");
    }
    if(p>=50 && p<60){
        printf("Second Grade ");
    }
    if(p>=40 && p<50){
        printf("Third Grade ");
    }
    if(p<=40){
        printf("Fail");
    }

    return 0;
}