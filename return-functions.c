#include <stdio.h>
/*
*return functions
*/
int Suma(int a, int b);
int main(){
  int num1, num2;
  printf("ingresa el primer valor: \n");
  scanf("%i", &num1);
  printf("ingresa el segundo valor: \n");
  scanf("%i", &num2);
  printf("el resultado de la suma es: %i \n", Suma(num1, num2));
  return 0;
}
int Suma(int num1, int num2){
  int suma;
  suma = num1 + num2;
  return suma;
}
