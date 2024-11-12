// 1. Addition 
// 2. Subtraction 
// 3. Multiplication 
// 4. Division 
// 5. Logarithmic values 
// 6. Square roots
#include<stdio.h>
#include<math.h>
int sum(int num1,int num2){
    int sum;
    sum=num1 +num2;
    return sum;
}

int subtraction(int num1,int num2){
    int sub;
    sub=num1-num2;
    return sub;
}

float division(int num1,int num2){
    float div;
    div=num1/num2;
    return div;
}

int multiplication(int num1,int num2){
    int mul;
    mul = num1*num2;
    return mul;
}

float lograthmic(int num1){
    return log(num1);
}

float squareRoot(int num1){
    return sqrt(num1);
}

int main(){
    int num1,num2,choice;
    printf("\t\t\t\t\tHi\n\t\t\t\tWelcome to the CALCULATOR\n");
    choices:
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Lograthmic Values\n6.Square root\n");
        printf("Enter choice:");
        scanf("%d",&choice);

    if(choice == 5 || choice==6){
        if(choice==5){
            printf("Enter number:");
            scanf("%d",&num1);
            printf("The log value is %f",lograthmic(num1));
        }else{
            printf("Enter number:");
            scanf("%d",&num1);
            printf("The square root is %f",squareRoot(num1));
        }
    }else if(choice > 7){
        printf("Wrong choice selected\n");
        goto choices;
    }else{
        printf("Enter number 1:");
        scanf("%d",&num1);
        printf("Enter number 2:");
        scanf("%d",&num2);
            
        if(choice == 1){
            printf("sum is :%d",sum(num1,num2));
        }else if(choice == 2){
            printf("subtraction is:%d",subtraction(num1,num2));
        }else if(choice == 3){
            printf("Multiplication is %d",multiplication(num1,num2));
        }else if(choice == 4){
            printf("Division is:%f",division(num1,num2));
        }
    }
    return 0;
} 