//increase studnet marks by 5 and thne print the updated array
#include<stdio.h>
int main(){
    int marks[]={34,54,64,2,55,29,43},i;
    for(i=0;i<=6;i++){
        marks[i]= marks[i]+5;
    }

    for(i=0;i<7;i++){
        printf("%d\n",marks[i]);
    }
}