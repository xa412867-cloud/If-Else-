/*Program To Check Whether The Points Are Lie On A Line Or Not*/
#include<stdio.h>
int main(){

int x1,x2,x3,y1,y2,y3;
printf("Enter (x1,y1)= ");
scanf("%d%d",&x1, &y1);
printf("Enter (x2,y2)= ");
scanf("%d%d",&x2, &y2);
printf("Enter (x3,y3)= ");
scanf("%d%d",&x3, &y3);

int m1,m2;
m1=((y2-y1)/(x2-x1));
m2=((y3-y2)/(x3-x2));

if(m1==m2){
    printf("These Points Are Lie On Same Line ");
}
else{
    printf("These Points Are Not Lie On The Same Line ");
}
  return 0;
}