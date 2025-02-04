#include<stdio.h>
int main(){
    int arr[5]={2,3,7,5,1};
    int product=1;
    for(int i=0; i<5; i++){
        product=product*arr[i];
    }
    printf("PRODUCT OF ARRAY ELEMENTS: %d",product);
}
