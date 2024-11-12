// WAP to check whether a given is Armstrong or not.
#include<stdio.h>
#include<math.h>
void armstong(int num);
int main(){
    int num;
    printf("Enter number to check if armstong or not:");
    scanf("%d",&num);
    armstong(num);

    return 0;
}

void armstong(int num){
    int tempNum,length=0,newNum=0;
    tempNum = num;
    while(tempNum != 0){
        tempNum/=10;
        length++;
    }
    tempNum=num;

    while (tempNum != 0) {
        int digit = tempNum % 10;
        newNum += pow(digit, length);
        tempNum /= 10;
    }
    newNum==num?printf("it is armstrong\n"):printf("it is not armstong\n"); 
}

