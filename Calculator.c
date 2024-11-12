#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>

const char* compChoice(void){
    const char* cchoice;
    srand(time(NULL));
    int randNum = (rand()%(101));
    if(randNum<33){
        cchoice="rock";
    }else if(randNum<66){
        cchoice="paper";
    }else{
        cchoice="scissor";
    }
    return cchoice;
}

void toLower(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void winner(const char* cchoice,const char* pchoice,int* pcount,int* ccount){
    if(strcmp(pchoice,cchoice)== 0){
        printf("Its a draw\n");
    }else if((strcmp(pchoice, "rock") == 0 && strcmp(cchoice, "scissor") == 0) || (strcmp(pchoice, "scissor") == 0 && strcmp(cchoice, "paper") == 0) || (strcmp(pchoice, "paper") == 0 && strcmp(cchoice, "rock") == 0)){
        printf("You win this round!\n");
        (*pcount)++;
    }else{
        printf("Computer win this round\n");
        (*ccount)++;
    }
}

int main(){
    printf("\t\t\t\t\t\t\tHello\n\t\t\t\t\t\tWelcome to the epic game\n\t\t\t\t\t\t  STONE PAPER SCISSOR\n");

    char name[10],pchoice[9],choice[3];
    int pcount=0,ccount=0;
    printf("Enter your name: ");
    scanf("%s",name);

    playGame:
        printf("\n\nDo you wish to play(yes/no): ");
        scanf("%s",choice);
        toLower(choice);

        if(strcmp(choice,"yes") == 0){
            printf("Enter your choice (rock/paper/scissor): ");
            scanf("%s",pchoice);
            toLower(pchoice);

            if(strcmp(pchoice,"rock") == 0 || strcmp(pchoice,"paper") == 0 || strcmp(pchoice,"scissor") == 0){
                const char* cchoice=compChoice();
                printf("Computer chose:%s\n",cchoice);

                winner(cchoice,pchoice,&pcount,&ccount);
                goto playGame;
            }else{
                printf("\noops\n\n");
                goto playGame;
            }
            

        }else if(strcmp(choice,"no")== 0){
            printf("points scored by %s :%d\n",name,pcount);
            printf("points scored by computer :%d\n",ccount);
            printf("\t\t\t\tDhanyawaad for playing");
        }else{
            printf("\nwrong choice\n");
            goto playGame;
        }

    return 0;
}
