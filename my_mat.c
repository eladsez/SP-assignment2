#include <stdio.h>
#include "my_mat.h"
#define N 10
#define TRUE 1
#define FALSE 0

int tempmatrix[N][N];

void Afunc(){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++)
      scanf("%d",&tempmatrix[i][j]);
  }
}

int Bfunc(int i, int j){
  Cfunc(i,j);
  if (tempmatrix[i][j] != 0)
    return TRUE;
  else return FALSE;
}

int Cfunc(int iW, int jW){
  for (int k = 0; k < N; k++){
    for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++){
        if (tempmatrix[i][k] != 0 && tempmatrix[k][j] != 0){
          if (tempmatrix[i][j] > (tempmatrix[i][k] + tempmatrix[k][j]) || tempmatrix[i][j] == 0)
            tempmatrix[i][j] = tempmatrix[i][k] + tempmatrix[k][j];
        }
      }
    }
  }
  for(int i = 0; i < N; i++)
    tempmatrix[i][i] = 0;

  if (tempmatrix[iW][jW] != 0)
    return tempmatrix[iW][jW];
  else return -1;
}

// void printmatrix(int matrix[N][N]){
//   for (int i = 0; i< N; i++){
//     printf("| ");
//     for(int j = 0; j < N; j++){
//       printf("%d ",matrix[i][j]);
//     }
//     printf("|\n");
//   }
// }

// int main(){
//   int matrix[N][N];
//   Afunc(matrix);
//   Bfunc(matrix);
//   printmatrix(matrix);
//   printf("\n");
//   printmatrix(tempmatrix);
//
// }
