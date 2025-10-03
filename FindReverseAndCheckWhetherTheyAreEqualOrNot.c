/*Program To Finding The Reverse Of A 5-Digit Number And Checking Whether They Are Equal Or Not  */
#include<stdio.h>
int main(){
    
    int n,q1,q2,q3,q4,q5,r1,r2,r3,r4,r5;
    printf("Enter 5-Digit Number ");
    scanf("%d",&n);

    r1=n%10;
    q1=n/10;
    r2=q1%10;
    q2=q1/10;
    r3=q2%10;
    q3=q2/10;
    r4=q3%10;
    q4=q3/10;
    r5=q4%10;
    
    int rev=10000*r1+1000*r2+100*r3+10*r4+1*r5;
    printf("The Reverse Of The Number Is : %d\n",rev);

    if(n==rev){
        printf("The Reverse Of The Number Is Same As The Number ");
    }
    else{
        printf("The Reverse Of The Number Is Not The Same As The Number ");
    }
    
    return 0;
}