/*Program To Find Youngest Among Three Using Ternary Operator */
#include<stdio.h>
int main(){

   int a,b,c;
   printf("Enter Value Of a,b,c ");
   scanf("%d%d%d",&a,&b,&c);
   (a>b)?((b>c)?(printf("c is Yongest ")):(printf("b Is Youngest"))):((a>c)?(printf("c Is Youngest ")):(printf("a Is Youngest")));


  return 0;
}