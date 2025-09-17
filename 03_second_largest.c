#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, first, second;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    first = second = INT_MIN;
    for(i=0; i<n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    if(second == INT_MIN) printf("No second largest element\n");
    else printf("Second largest element = %d\n", second);
    return 0;
}