// WAP to check whether score is even or odd in an array.
#include<stdio.h>
int main(){
    int marks[]={34,54,64,99,55,99,43};//7
    for(int i=0;i<7;i++){
        if(marks[i]%2 == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }
    return 0;
}