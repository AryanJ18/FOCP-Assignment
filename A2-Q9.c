// WAP to find a peak element which is not smaller than its neighbors
#include<stdio.h>
int main(){
    int marks[]={34,54,64,99,55,9,43};
    for(int i=0;i<7;i++){
        if(marks[i-1]<marks[i] && marks[i+1]<marks[i]){
            printf("%d\n",marks[i]);
        }
    }
    return 0;
}