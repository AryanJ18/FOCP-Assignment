// WAP to print Pascal’s Triangle
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        int val = 1;
        for(j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
//    1 
//   1 1 
//  1 2 1 
// 1 3 3 1 