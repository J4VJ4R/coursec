#include <stdio.h>
/*
*bidimensional array
*@number is a variable to number
*/
long Factorial(long number);
int main(){
  int number;
  printf("ingresa un número\n");
  scanf("%i", &number);
  for (int i = 0; i <= number; i++)
  {
    printf("%ld\n", Factorial(i));
  }
  
  return 0;
}
long Factorial(long number){
  if (number <= 1)
  {
    return 1;
  }else{
    return(number * Factorial(number - 1));
  }
  
}