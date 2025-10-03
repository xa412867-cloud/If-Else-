/*Program To Check Whwther The Points Are On The X-Axis, Y-Axis And Origin */
#include<stdio.h>
int main(){

    int x,y;
    printf("Enter The Coordinate Of (x,y)=");
    scanf("%d%d",&x,&y);

    if(x==0 && y!=0){
        printf("Point Lies On Y-Axis");
    }
    if(y==0 && x!=0){
        printf("Point Lies On X-Axis");
    }
    if(x==0 && y==0){
        printf("Point Lies On Origin ");
    }
    if(x!=0 && y!=0){
        printf("Point Do Not Lie On X-axis,Y-axis And Origin ");
        }

  return 0;
}