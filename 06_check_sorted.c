#include <stdio.h>

int main() {
    int n, i, sorted=1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    for(i=1; i<n; i++) {
        if(arr[i] < arr[i-1]) {
            sorted = 0;
            break;
        }
    }
    if(sorted) printf("Array is sorted\n");
    else printf("Array is not sorted\n");
    return 0;
}