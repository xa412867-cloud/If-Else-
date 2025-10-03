/*Program To Finding The Given Year Is Leap Year Or Not  */
#include<stdio.h>
int main(){

    int n;
    printf("Enter The Year ");
    scanf("%d",&n);

    if(n%4==0){
        printf("Year Is Leap Year ");
    }
    else{
        printf("Year Is Not A Leap Year ");
    }

    return 0;
}