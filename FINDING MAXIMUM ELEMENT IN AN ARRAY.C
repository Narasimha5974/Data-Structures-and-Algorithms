#include<stdio.h>
int main(){
    int arr[10]={9,2,6,10,1};
    int min=arr[0];
    for(int i=0; i<5; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
   printf("SMALLEST ELEMENT:%d",min);
}
