#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Handle k > n
    k = k % n;

    // Reverse entire array
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Reverse first k elements
    for (int i = 0; i < k / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }

    // Reverse remaining elements
    for (int i = k; i < (n + k) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - (i - k) - 1];
        arr[n - (i - k) - 1] = temp;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}