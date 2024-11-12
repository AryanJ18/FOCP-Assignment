//to print student grade as per marks 
#include<stdio.h>
int main(){
    int marks[]={34,94,64,2,55,29,83},i;
    for(i=0;i<7;i++){
        if(marks[i]>=75){
            printf("A grade\n");
        }
        else if(marks[i]>=60){
            printf("B grade\n");
        }
        else if(marks[i]>=40){
            printf("C grade\n");
        }
        else if(marks[i]<40){
            printf("D grade\n");
        }
    }

}