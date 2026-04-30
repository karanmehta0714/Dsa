#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array
    qsort(arr, n, sizeof(int), compare);

    int left = 0, right = n - 1;
    int minSum = 1000000000;  // large value
    int x = 0, y = 0;

    // Two-pointer approach
    while (left < right) {
        int sum = arr[left] + arr[right];

        // Update closest sum
        if (abs(sum) < abs(minSum)) {
            minSum = sum;
            x = arr[left];
            y = arr[right];
        }

        // Move pointers
        if (sum < 0)
            left++;
        else
            right--;
    }

    // Output result
    printf("%d %d", x, y);

    return 0;
}