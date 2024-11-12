// WAP for Binary to Decimal conversion & Decimal to Binary for a given number  as per 
// user’s choice.
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;
    
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}

long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;
    
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * i;
        decimal /= 2;
        i *= 10;
    }
    
    return binary;
}

int main() {
    int choice;
    printf("Choose an option:\n1. Binary to Decimal\n2. Decimal to Binary\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal: %d\n", binaryToDecimal(binary));
    } 
    else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary: %lld\n", decimalToBinary(decimal));
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}