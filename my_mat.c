#include <stdio.h>
#include "my_mat.h"
#define N 10

void Afunc(int matrix[N][N]){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++)
      scanf("%d",matrix[i][j]);
  }
}

void Bfunc(int matrix[N][N]){
  int i, j;
  if (scanf("%d%d",&i,&j) == 2){
    if (matrix[i][j] != 0)
      printf("True\n");
    else printf("False\n");
  }
  else printf("Bfunc failed\n");
}

void Cfunc(int matrix[N][N]){

  

}
