// calcolo maggiore tra due numeri

#include <stdio.h>

int main( void ){

  int a, b;
  int max;

  puts( "%s", "Inserisci primo numero : " );
  scanf( "%d", &a );
  puts( "%s", "Inserisci secondo numero : " );
  scanf( "%d", &b );

  max = a;
  if( b > a ) max = b;

  printf( "il massimo e' : %d\n", max );

  return 0;
}
