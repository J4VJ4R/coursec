#include <stdio.h>
// int main(){
//   int x = 0;
//   int *pointer = &x;
//   printf("%p", pointer);  
//   return 0;
// }
//example
void jugar(int *n){
  int o = *n;
  o = o * 3;
  *n = o;
  printf("%i", o); 
}
int main(){
  int x = 10;
  jugar(&x);
  printf("%d", x);
  return 0;
}