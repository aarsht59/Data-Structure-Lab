#include <stdio.h>

void selectionSort(int arr[], int n) {

     for (int i = 0; i < n - 1; i++) {
        int max_idx = i;  
        
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        
        
        if (max_idx != i) {
            int temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;
        }
	 }

}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
