/*Program To Check The Triangle As Is It iscosceles,Equilateral,,scalene or Right Angeled Triangle */
#include<stdio.h>
int main(){

    float a,b,c;
    printf("Enter 1st Side ");
    scanf("%f",&a);
    printf("Enter 2nd Side ");
    scanf("%f",&b);
    printf("Enter 3rd Side ");
    scanf("%f",&c);

    if((a+b>c) && (a+c>b) && (b+c)>a){
        if((a==b) && (b==c) && (c==a)){
            printf("Triangle Is Equilateral ");
        }
        else if(((a==b) && (b==c)&& (c!=a)) || ((a!=b) && (b==c) && (c==a)) || ((a==b) && (b!=c) && (c==a))){
            printf("Triangle Is A Isosceles Triangle ");
        }
        else if((((a*a)+(b*b))==(c*c)) || (((b*b)+(c*c))==(a*a)) || (((a*a)+(c*c))==(b*b))){
            printf("Triangle is Right Angled Triangle ");
        }
        else{
            printf("Triangle Is Scalene Triangle ");
        }
    }
    else printf("Entered Side Does Not Form Triangle ");

    return 0;
}