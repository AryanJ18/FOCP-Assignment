// WAP to check whether number is Perfect Number or not
#include<stdio.h>
void perfectNum(int num);
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    perfectNum(num);
    return 0;
}

void perfectNum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(num%i ==0){
            sum+=i;
        }
    }

    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
}