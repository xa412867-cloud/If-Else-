/*Program To Check Whether The Point Lie Ouside,Inside And On The Circle */
#include<stdio.h>
#include<math.h>
int main(){

    int x,y,a,b,r,eos;
    printf("Enter Coordinate Of Centre Of Cicle (x,y)=");
    scanf("%d%d",&x, &y);
    printf("Enter Radius Of The Circle ");
    scanf("%d",&r);
    printf("Enter Coordinate Of Point (a,b)=");
    scanf("%d%d",&a, &b);

    eos=pow(a-x,2)+pow(b-y,2)-pow(r,2);

    if(eos>0){
        printf("The Point Lie Outside The Circle ");
    }
    if(eos<0){
        printf("The Point Lie Inside The Circle ");
    }
    if(eos==0){
        printf("Point Lie On The Circle ");
    }

  return 0;
}