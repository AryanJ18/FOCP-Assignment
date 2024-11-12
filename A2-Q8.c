//  WAP to find maximum & minimum score in the Marks array.
#include<stdio.h>
int main(){
    int marks[]={34,54,64,99,55,99,43},min=100,max=0;
    for(int i=0;i<7;i++){
        if(max<marks[i]){
            max=marks[i];
        } 
    }

    for(int i=0;i<7;i++){
        if (min>marks[i]){
            min=marks[i];
        }
    }
    printf("min:%d\nmax:%d",min,max);
    return 0;
}