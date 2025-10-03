/*Program To Find Whether The Entered Character Is Lower Case Or Not */
#include<stdio.h>
int main(){

    char ch;
    printf("Enter The Character ");
    scanf("%c",&ch);

    (ch>=97 && ch<=122)?printf("Character Is Lower Case "):printf("Character Is Not A Lower Case ");

    return 0;
}