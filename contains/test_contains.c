#include <stdio.h>
#include <stdlib.h>
#include "contains.h"



int main() {
  int * vect;
  int pos = -1;
  unsigned int size;
  int elem;
  
  scanf("%u",&size);
  vect = (int * ) malloc(size * sizeof(int));

  for (int cpt = 0; cpt < size; cpt++) {
    scanf("%d", & vect[cpt]);
  }
  scanf("%d",&elem);

  pos = contains( & vect[0], size, elem);
  printf("%d\n", pos);
  free(vect);

  return 0;
}