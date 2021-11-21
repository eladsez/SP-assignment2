#include <stdio.h>
#include "my_mat.h"
#define N 10

int tempmatrix[N][N];

void Afunc(int matrix[N][N]){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      scanf("%d",&matrix[i][j]);
      tempmatrix[i][j] = matrix[i][j];
    }
  }
}

void Bfunc(int matrix[N][N]){
  int i, j;
  if (scanf("%d%d",&i,&j) == 2){
      Cfunc(tempmatrix);
    if (tempmatrix[i][j] != 0)
      printf("True\n");
    else printf("False\n");
  }
  else printf("Bfunc failed");
}

void Cfunc(int matrix[N][N]){
  int iW, jW;
  if (scanf("%d%d",&iW,&jW) == 2){
    for (int k = 0; k < N; k++){
      for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
          if (tempmatrix[i][j] > (tempmatrix[i][k] + tempmatrix[k][j]))
            tempmatrix[i][j] = tempmatrix[i][k] + tempmatrix[k][j];
        }
      }
    }
  if (tempmatrix[iW][jW] != 0)
    printf("True");
  else printf("False");
  }
  else printf("Cfunc faild");
}

void printmatrix(int matrix[N][N]){
  for (int i = 0; i< N; i++){
    printf("| ");
    for(int j = 0; j < N; j++){
      printf("%d ",matrix[i][j]);
    }
    printf("|\n");
  }
}

int main(){
  int matrix[N][N];
    Afunc(matrix);
    printmatrix(matrix);
    printf("\n");
    printmatrix(tempmatrix);

}
