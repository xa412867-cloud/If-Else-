/*Program To Display The Fine And Or The Appropriate Message */
#include<stdio.h>
int main(){

    int n;
    printf("Enter The Days In Which Member Is Late To Return The Book ");
    scanf("%d",&n);

    if(n>0 && n<=5) printf("Fine Is 50 Paise ");
    if(n>=6 && n<=10) printf("Fine Is 1 Rupees ");
    if(n>10 && n<=30) printf("Fine Is 4 Rupees ");
    if(n>30) printf("Membership Will Be Cancelled ");

    return 0;
}