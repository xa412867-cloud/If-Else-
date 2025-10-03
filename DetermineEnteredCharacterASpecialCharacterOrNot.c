/*Program To Find Whether The Entered Character Is A Special Character Or Not */
#include<stdio.h>
int main(){

    char ch;
    printf("Enter The Character ");
    scanf("%c",&ch);

    ((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127))?printf("Entered Character Is A Special Character "):printf("Entered Character Is NOt A Special Character ");

    return 0;
}