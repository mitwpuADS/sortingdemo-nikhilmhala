/*
Fill these details first
Name: 
PRN:
Roll No:
Date Submitted: 
*/
// copy the code below this line

// Your code goes here
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    
    // Read the number of items
    //printf("Enter the number of items: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the items
    //printf("Enter the items:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array
    bubbleSort(arr, n);
    
    // Print the sorted array
    //printf("Sorted items:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   // printf("\n");
    
    return 0;
}
