#include <stdio.h>
#include <stdlib.h>
#include "libprim.h"
 
int G1[6][5] = {
  {2, 4, 3, 4, 2},
  {2, 4, 0, 0, 0},
  {3, 4, 3, 0, 0},
  {2, 3, 0, 0, 0},
  {3, 3, 0, 0, 0},
  {4, 4, 0, 0, 0}
};

int G[5][5] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}
}; 
int main () {
    int dst[5];
    memset(dst, (int)0, sizeof(dst)/sizeof(int));
    prim(G, 5, 5, dst); 
  return 0;
}
