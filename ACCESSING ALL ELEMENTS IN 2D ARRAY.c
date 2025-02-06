#include<stdio.h>
  int main(){
  int arr[3][2]={{1,2},{3,4},{5,6}};
  printf("ACCESSING ALL ELEMENTS IN 2D ARRAY: \n");
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 1; j++) { 
    printf("%d\n",arr[i][j]);
    }
     }
      }
