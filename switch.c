#include <stdio.h>
/*
*cicle switch
*/
int main()
{
  int options;
  printf("Elige el día\n 1 = Lunes\n 2 = Martes\n 3 = Miércoles\n 4 = Jueves\n");
  scanf("%i", &options);
  switch (options)
  {
  case 1:
    printf("Has elegido Lunes \n");
    break;
  case 2:
    printf("Has elegido Martes \n");
    break;
    case 3:
    printf("Has elegido Miercoles \n");
    break;
  case 4:
    printf("Has elegido Jueves \n");
    break;

  default:
    break;
  };
  return 0;
}