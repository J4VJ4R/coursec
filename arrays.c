#include <stdio.h>
/*
*arrays
*/
int main()
{
  int sizeA;
  printf("ingresa el tamaño del arreglo\n");
  scanf("%i", &sizeA);
 int array[sizeA];
 for (int i = 0; i < sizeA; i++)
 {
   printf("ingresa el valor: %i => ", i+1);
   scanf("%i", &array[i]);
 }
 for (int i = 0; i < sizeA; i++)
 {
   printf("el valor %i ingresado es: %i => \n", i+1, array[i]);
 }
 


 
 return 0;
}