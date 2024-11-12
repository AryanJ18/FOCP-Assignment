//implement delete -Front, any position in between & end in an array. Print the array before insert & after insert.
#include <stdio.h>
int main(){
    int marks[20]={34,33,3,88,99,21,99,63,32,90},a,pos;
    for(int i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    printf("Enter postion : ");
    scanf("%d",&pos);
        for(int i=pos-1;i<9;i++){
            marks[i] = marks[i+1];
        }

        for(int j=0;j<9;j++){
            printf(" ele %d\n",marks[j]);
        }
    return 0;
}