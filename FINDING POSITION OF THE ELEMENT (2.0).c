#include<stdio.h>
int main (){
    int arr[5]={10,20,40,6,7};
    int elements=10;
    int position= -1;
    for (int i=0; i<=4; i++){
        if (elements==arr[i]){
            //printf("\nPOSITION OF THE ELEMENT: %d",i);
            position=i;
        }
    }
        if(position== -1){
            printf("position not found");
        }
        else{
            printf("\n%d is position",position);
    }
}

// OUTPUT : 0 is position
