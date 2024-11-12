// //  WAP to count prime numbers in an array.
#include<stdio.h>
int main() {
    int marks[] = {34, 54, 64, 99, 55, 9, 13, 43};
    int count = 0;
    for (int i = 0; i < 8; i++) {
        int isPrime = 1;
        if (marks[i] <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j <marks[i] ; j++) { 
                if (marks[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}