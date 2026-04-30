#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    // Prefix sum array
    int prefix[n];
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Count zero sum subarrays
    for (int i = 0; i < n; i++) {
        if (prefix[i] == 0)
            count++;

        for (int j = i + 1; j < n; j++) {
            if (prefix[i] == prefix[j])
                count++;
        }
    }

    printf("%d", count);

    return 0;
}