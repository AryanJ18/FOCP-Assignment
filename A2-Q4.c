//how many students scored 99 marks
#include<stdio.h>
int main(){
    int marks[]={34,54,64,99,55,99,43},i,toppers=0;
    for(i=0;i<=6;i++){
        if(marks[i]==99){
            toppers++;
        }
    }
    printf("number of students with 99 are %d",toppers);
return 0;
}