/*
 * arrays.c, a short list exercise using arrays for the 
 * C language lab in CS 105
 * 
 * Cai Glencross & Jeff Carney
 *
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * It is bad practice to hard-code constants, but we can
 * get away with it for this demonstration program.
 */
typedef int two_dim_array[4][7];
typedef int *array_of_arrays[7];

/*
 * Initialize the array with decimal numbers that reflect
 * the indices.
 */
void init_two_dim_array (two_dim_array ary) {
  int i, j;
  for (i = 0; i < 4; i++)
    for (j = 0; j < 7; j++)
      ary[i][j] = i * 10 + j;
}

/*
 * Print the two-dimensional array with the hard-coded
 * bounds.
 */
void print_two_dim_array (two_dim_array ary) {
  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 7; j++)
      printf("%.2d ", ary[i][j]);
    printf("\n");
  }
  printf("\n");
}

/*
 * Print the array of arrays with the hard-coded bounds.
 */
void print_array_of_arrays (array_of_arrays ary) {
  int i, j;
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 4; j++)
      printf("%.2d ", ary[i][j]);
    printf("\n");
  }
  printf("\n");
}

/* Our demonstration code.
 *
 * Complete the seven assignment statements so that
 * aoa is a 7 x 4 array, just like the 4 x 7 array
 * except with the rows backwards.
 */
int main () {
  two_dim_array tda;
  array_of_arrays aoa;

  aoa[0] = &(tda[0][0])+24;
  aoa[1] = &(tda[0][0])+20;
  aoa[2] = &(tda[0][0])+16;
  aoa[3] = &(tda[0][0])+12;
  aoa[4] = &(tda[0][0])+8;
  aoa[5] = &(tda[0][0])+4;
  aoa[6] = &(tda[0][0]);

  init_two_dim_array(tda);
  print_two_dim_array(tda);
  print_array_of_arrays(aoa);

  return 0;
}
