// WAP to accept a coordinate point in an XY coordinate system and determine in which 
// quadrant the coordinate point lies
#include<stdio.h>
int quad(int a,int b);
int main(){
    int a,b;
    printf("1st number is:");
    scanf("%d",&a);
    printf("2st number is:");
    scanf("%d",&b);
    printf("the numbers are in quadrant %d",quad(a,b));
    return 0;
}

int quad(int a,int b){
    if(a>0 && b>0){
        return 1;
    }
    else if (a>0 && b<0)
    {
        return 2;
    }
    else if(a<0 && b>0){
        return 3;
    }
    else{
        return 4;
    }
}