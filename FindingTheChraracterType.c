/*Program To Find The Type Of The Character As Capital Letter,Small Letter,Digit And Special Symbol */
#include<stdio.h>
int main(){

    char e;
    printf("Enter The Character : ");
    scanf("%c",&e);

    if(e>=65 && e<=90){
        printf("%c Is A Capital Letter ",e);
    }
    if(e>=97 && e<=122){
        printf("%c Is A Small Letter ",e);
    }
    if(e>=48 && e<=57){
        printf("%c Is A Digit ",e);
    }
    if((e>=0 && e<=47) || (e>=58 && e<=64) || (e>=91 && e<=96) || (e>=123 && e<=127)){
        printf("%c Is a Special Character ",e);
    }

    return 0;
}