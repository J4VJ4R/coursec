#include <stdio.h>
int main(){
  int age;
  printf("Enter your age\n");
  scanf("%d", &age);
  if (age >= 18)
  {
    printf("You are old\n");
  }else if (age == 17)
  {
    printf("You left one year to be old");
  }else
  {
    printf("Your are young\n");
  }
  
  return 0;
}