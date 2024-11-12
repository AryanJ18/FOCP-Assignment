// WAP to accept two integer numbers and swap them using 4 different methods in C language.
#include<stdio.h>
void swap1(int h,int b);
void swap2(int h,int b);
void swap3(int h,int b);
void swap4(int h,int b);
int main(){
    int h,b;
    printf("1st number is:");
    scanf("%d",&h);
    printf("2st number is:");
    scanf("%d",&b);
    swap1(h,b);
    return 0;
}

void swap1(int h,int b){
    h=h+b;
    b=h-b;
    h=h-b;
    printf("now 1st number is %d \n3",h);
    printf("now 2st number is %d",b);
}

void swap2(int h,int b){
    swap = h;
    h = b;
    b = swap;
    printf("now 1st number is %d \n",h);
    printf("now 2st number is %d",b);
}

