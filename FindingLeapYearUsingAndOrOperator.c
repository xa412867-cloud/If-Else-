/*Program To Find Whether The Year Leap Year Or Not By Using && ANd || Operator*/
#include<stdio.h>
int main(){

    int y;
    printf("Enter The Year ");
    scanf("%d",&y);

    if(y%400==0 || (y%4==0 && y%100!=0)){
        printf("Year Is The Leap Year ");
    }
    else{
        printf("Year Is Not A Leap Year ");
    }

    return 0;
}