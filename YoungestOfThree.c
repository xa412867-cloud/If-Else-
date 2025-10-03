/*Program To Find The Youngest Among The Three Boy Using && Operator */
#include<stdio.h>
int main(){

  int ram,shyam,ajay;
  printf("Enter Ram Age : ");
  scanf("%d",&ram);
  printf("Enter Shyam Age : ");
  scanf("%d",&shyam);
  printf("Enter Ajay Age : ");
  scanf("%d",&ajay); 

  if(ram<shyam && ram<ajay){
    printf("Ram Is Youngest ");
  }
  if(shyam<ram && shyam<ajay){
    printf("Shyam Is Youngest ");
  }
  if(ajay<ram && ajay<shyam){
    printf("Ajay Is Youngest ");
  }

  return 0;
}