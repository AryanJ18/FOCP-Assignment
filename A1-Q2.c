//WAP to read two integers and print their HCF (Highest Common Factor).
#include<stdio.h>
int hcf(int num1,int num2);
int main(){
    int num1,num2;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);

    printf("hcf of the two numbers is %d",hcf(num1,num2));
    return 0;
}

int hcf(int num1,int num2){
    int gnum,ans;
    gnum = num1>num2?num1:num2;

    for(int i=1;i<=gnum;i++){
        if(num1%i==0 && num2%i==0){
            ans=i;
        } 
    }
    return ans;
}