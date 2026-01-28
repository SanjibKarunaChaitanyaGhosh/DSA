#include <stdio.h>
//(e) C Program to Implement Interpolation Search
// Works on sorted and uniformly distributed arrays.
int main() {
    int arr[100], n, key, low, high, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high && key >= arr[low] && key <= arr[high]) {

        pos = low + ((key - arr[low]) * (high - low)) / (arr[high] - arr[low]);

        if(arr[pos] == key) {
            printf("Element found at position %d\n", pos + 1);
            return 0;
        }

        if(arr[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
    }

    printf("Element not found\n");
    return 0;
}

