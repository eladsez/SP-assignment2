#include <stdio.h>
#include "my_mat.h"
#define N 10

int main(){
  int matrix[N][N];
  char state;
  while (scanf("%c",&state) != 'D') {

    if(state == 'A')
      Afunc(matrix);
    if(state == 'B')
      Bfunc(matrix);
    if(state == 'C')
      Cfunc(matrix);

    else return 0;
  }

}
