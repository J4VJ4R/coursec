#include <stdio.h>
/*
*function to sum
*/
int main(){
  int num1, num2, res;
  printf("enter firs number\n");
  scanf("%d", &num1);
  printf("enter second number\n");
  scanf("%d", &num2);
  res = num1 + num2;
  printf("The result of the sum is: %d\n", res);
  return 0;
}