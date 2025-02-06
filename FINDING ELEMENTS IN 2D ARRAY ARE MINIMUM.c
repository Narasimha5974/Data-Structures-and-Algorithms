  #include<stdio.h>
int main(){
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int min=arr[0][0];
    for(int i=0; i<=2; i++){
      for(int j=0; j<=1; j++){
        if(min>arr[i][j]){
            min=arr[i][j];
        }
    }
}
  printf("SMALLEST ELEMENT:%d",min);
 }
 
 // SMALLEST ELEMENT: 1
