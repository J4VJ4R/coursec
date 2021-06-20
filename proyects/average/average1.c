/*
*promedio de notas de tres materias
*matemáticas, bilogía, ciencias
*/
#include <stdio.h>
int average(int a, int b, int c);

int main(){
  int result = 0, math = 20, biology = 30, cience = 50;
  result = average(math, cience, biology);
  printf("el promedio es: %i", result);
}

int average(int a, int b, int c){
  int sum, average;
  sum = a + b + c;
  average = sum / 3;
  return average;
}
