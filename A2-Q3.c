//to show who scored 99 first
#include<stdio.h>
int main(){
    int marks[]={34,54,64,99,55,29,43},i;
    for(i=0;i<=6;i++){
        if(marks[i]==99){
            printf("the first student to score 99 is %d",i+1);
        }
    }
return 0;
}