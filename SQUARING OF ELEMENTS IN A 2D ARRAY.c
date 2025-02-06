#include<stdio.h>
  int main(){
  int arr[3][2]={{1,2},{3,4},{5,6}};
  int square;
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 1; j++) { 
      square=arr[i][j]*arr[i][j];
      }
       }
        printf("%d is result.",square);
         }


//output : 36
