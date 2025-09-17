#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], visited[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    for(i=0; i<n; i++) {
        if(visited[i]) continue;
        count = 1;
        for(j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}