// 1
// 01
// 101  
// 0101  
// 10101 
#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        int flag=i%2;
        for(int j=0;j<=i;j++){
            if(flag == 1){
                printf("%d",0);
                flag = 0;
            }
            else{
                printf("%d",1);
                flag = 1;
            }
        }
        printf("\n");
    }
    return 0;
}