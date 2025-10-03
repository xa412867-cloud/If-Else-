/*Given 01/01/1990 It Was Monday */
/*Program To Find Day Of The 1st January Of Any Given Year */
#include<stdio.h>
int main(){

    int n;
    printf("Enter The Year ");
    scanf("%d",&n);

    if(n%4==0){
        printf("The Day Is 'Wednesday' ");
    }
    else{
        printf("The Day Is 'Tuesday' ");
    }

    return 0;
}