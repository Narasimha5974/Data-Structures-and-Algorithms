#include<stdio.h>
  int main(){
  int arr[3][2]={{1,2},{3,4},{5,6}};
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 1; j++) { 
       if(arr[i][j]%2==0){
          printf("%d is EVEN\n", arr[i][j] );
      }
      else{
        printf("%d is ODD\n", arr[i][j]);
         }
       }
        }
         
         return 0;
          }


//output : ODD : EVEN : ODD : EVEN : ODD : EVEN
