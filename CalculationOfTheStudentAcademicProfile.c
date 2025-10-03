/*Program Which Show Whether The Student Passed ,Failed Or Allowance To Reappear In Exam  */
#include<stdio.h>
int main(){

   float a,b,a1,a2,b1,b2;
   printf("Enter The Marks In Degree With 'A' Is :");
   scanf("%f%f",&a1,&a2);
   printf("Enter The Marks InDEgree With 'B' Is : ");
   scanf("%f%f",&b1,&b2);

   a=(a1+a2)/2;
   b=(b1+b2)/2;

   if(((a>=55) && (b>=45)) || (((a<=55) && (a>=45)) && (b>=65))){
    printf("The Student Is Qualified The Degree ");
   }
   else if(((b<=45)&&(a>=65))){
    printf("The Student Is Allowed To Reappear In Exam ");
   }
   else{
    printf("He Is Failed ");
   }

    return 0;
}