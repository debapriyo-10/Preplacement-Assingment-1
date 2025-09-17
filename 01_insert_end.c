#include <stdio.h>

int main() {
    int n, i, val;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &val);
    arr[n] = val;
    printf("Array after insertion: ");
    for(i=0; i<=n; i++) printf("%d ", arr[i]);
    return 0;
}