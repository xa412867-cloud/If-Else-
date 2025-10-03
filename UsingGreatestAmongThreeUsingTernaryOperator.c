/*Program To Find The Greatest Among The Three Using Ternary Operators */
#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter 1st Number ");
    scanf("%d",&a);
    printf("Enter 2nd NUmber ");
    scanf("%d",&b);
    printf("Enter 3rd Number ");
    scanf("%d",&c);

    (a>b)?((a>c)?printf("%d Is Greatest ",a):printf("%d Is Greatest ",c)):((c<b)?printf("%d Is Greatest ",b):printf("%d Is Greatest ",c));

    return 0;
}