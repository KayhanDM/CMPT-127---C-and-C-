#include <stdio.h> // for printf()
#include "funcs.h"

int main( void )
{
  int a = 11;
  int b = 12;
  printf( "The max of our numbers is %d\n", maximum( a, b ));
  printf( "The min of our numbers is %d\n", minimum( a, b ));
  return 0;
}
