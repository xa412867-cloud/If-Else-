/*Program To Calculate The Premium Amount And Policy Amount */
#include<stdio.h>
int main(){

    char h,l,g;
    printf("For Male Enter 'M'\nFor Female Enter'F'\n");
    printf("Enter The Gender : ");
    scanf(" %c",&g);

    printf("For Excellent Health Enter 'E'\nFor Poor Health Enter 'P'\n");
    printf("Enter The Health Status : \n");
    scanf(" %c",&h);

    printf("Who Live In City Enter 'C'\nWho Live In Village Enter 'V'\n");
    printf("Enter Where You Live :\n");
    scanf(" %c",&l);

    int a;
    printf("Enter Age ");
    scanf("%d",&a);

    if((h=='E') && (l=='C') && (g=='M') && (a>=25 && a<=35)){
        printf("Premium Amount Is Rs. 4 Per Thousand\nPolicy Amount Cannot Exceed Rs. 2 Lakhs");
    }
else if((h=='E') && (l=='C') && (g=='F') && (a>=25 && a<=35)){
    printf("Premium Amount Is Rs. 3 Per Thousand\nPolicy Amount Cannot Exceed Rs. 1 Lakh ");
}
else if((h=='P') && (l=='V') && (g=='M') && (a>=25 && a<=35)){
    printf("Premium Amount Is Rs. 6 Per Thousand\nPolicy Amount Cannot Exceed Rs. 10,000");
}
else{
    printf("Person Is Not Ensured ");
}

    return 0;
}