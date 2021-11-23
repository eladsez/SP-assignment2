#include <stdio.h>
#include "my_mat.h"
#define N 10

int main(){
  char state;
  int i,j;
  scanf("%c",&state);
  while (state != 'D') {

    if(state == 'A')
      Afunc();
    if(state == 'B'){
      scanf("%d%d",&i,&j);
      if(Bfunc(i,j))
        printf("True\n");
      else printf("False\n");
    }
    if(state == 'C'){
      scanf("%d%d",&i,&j);
      int c = Cfunc(i,j);
      printf("%d\n",c);
    }
    scanf("%c",&state);
  }
}
