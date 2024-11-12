// WAP to find average score of the Marks array.
#include<stdio.h>
int main(){
    int marks[]={34,54,64,99,55,99,43},sum=0;//7
    for(int i=0;i<7;i++){
        sum+=marks[0];
    }
    int avg= sum/7;
    printf("%d",avg);
    return 0;
}