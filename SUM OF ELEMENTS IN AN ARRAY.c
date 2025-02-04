#include<stdio.h>
int main(){
    int arr[5]={2,3,7,5,1};
    int sum=0;
    for(int i=0; i<5; i++){
        sum=sum+arr[i];
    }
    printf("SUM OF ARRAY ELEMENTS: %d",sum);
}
