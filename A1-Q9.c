// 0        0 
// 01      01 
// 010    010  
// 0101  0101  
// 0101001010
#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2);
        }
        for (int j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", (j + 1) % 2);
        }
        printf("\n");
    }

    return 0;
}