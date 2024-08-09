#include <stdlib.h>
#include <stdio.h>
 
#define INF 9999999
#define true 1
#define false 0
  
int prim (int** src, int vertex, int distance, int *dst) {
 
  int no_edge;
  no_edge = 0;
    memset(dst, false, vertex*sizeof(int));
    dst[0] = true;
  int x;            //  row number
  int y;            //  col number

  while (no_edge < vertex-1) {
 
  //For every vertex in the set S, find the all adjacent vertices
  // , calculate the distance from the vertex selected at step 1.
  // if the vertex is already in the set S, discard it otherwise
  //choose another vertex nearest to selected vertex  at step 1.
 
      int min = INF;
      x = 0;
      y = 0;
 
      for (int i = 0; i < vertex; i++) {
        if (dst[i]) {
            for (int j = 0; j < distance; j++)
	    {	     
              if (!dst[j] && (*((int*)src+distance*i+j))) { // not in selected and there is an edge
                  if (min > (*((int*)src+distance*i+j))) {
                      min = (*((int*)src+distance*i+j));
                      x = i;
                      y = j;
                  }
              }

          }
        }
      }
      printf("%d - %d : %d\n", x, y, (*((int*)src+distance*x+y)));
      dst[y] = true;
      no_edge++;
    }
 
  return 0;
}
