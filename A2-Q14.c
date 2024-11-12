// Given an array of n integers. The task is to print the duplicates in the given array. 
// If there are no duplicates then print -1
#include <stdio.h>
int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int foundDuplicates = 0;
    printf("Duplicate elements are: ");
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }

        int already_printed = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                already_printed = 1;
                break;
            }
        }

        if (is_duplicate && !already_printed) {
            printf("%d ", arr[i]);
            foundDuplicates = 1;
        }
    }

    if (!foundDuplicates) {
        printf("-1");
    }

    printf("\n");
    return 0;
}
