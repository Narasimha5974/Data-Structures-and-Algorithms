#include <stdio.h>
int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int min, temp; // Declare min and temp

    for (int j = 0; j <= 3; j++) { // Outer loop: j from 0 to 3 (not 4)
        min = j; // Initialize min to j
        for (int i = j + 1; i <= 4; i++) {
            if (arr[min] > arr[i]) {
                min = i;
            }
        
        // Swap arr[j] and arr[min]
        temp = arr[min];
        arr[min] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i <= 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline for cleaner output
    return 0; // Good practice to return 0 from main
}
