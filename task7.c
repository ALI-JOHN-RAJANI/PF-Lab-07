#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] >= 0 && arr[i] < n) {
            count[arr[i]]++;
        }
    }
    printf("Numbers occurring more than once: ");
    int foundDuplicate = 0;
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            foundDuplicate = 1;
        }
    }
    if (!foundDuplicate) {
        printf("None");
    }
    printf("\n");
    return 0;
}