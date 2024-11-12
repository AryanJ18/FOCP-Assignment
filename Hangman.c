#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

void hangDiagram(void){
    printf("\t\t\t*******************\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t***\n");
    printf("\t\t\t*\t       *****\n");
    printf("\t\t\t*\t\t***\n");
    printf("\t\t\t*\n");
    printf("\t\t\t*\n");
    printf("\t\t\t*\n");
    printf("\t\t\t*\n");
    printf("\t\t\t*\n");
    printf("\t\t\t*\n");
    printf("\t\t  *************\n");
}

void hangDiagram1(void){
    printf("\t\t\t*******************\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t***\n");
    printf("\t\t\t*\t       *****\n");
    printf("\t\t\t*\t\t***\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\n");
    printf("\t\t\t*\n");
    printf("\t\t  *************\n");
}

void hangDiagram2(void){
    printf("\t\t\t*******************\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t***\n");
    printf("\t\t\t*\t       *****\n");
    printf("\t\t\t*\t     *  ***  *\n");
    printf("\t\t\t*\t      *  *  *\n");
    printf("\t\t\t*\t       * * *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\n");
    printf("\t\t\t*\n");
    printf("\t\t  *************\n");
}

void hangDiagram3(void){
    printf("\t\t\t*******************\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t\t***\n");
    printf("\t\t\t*\t       *****\n");
    printf("\t\t\t*\t     *  ***  *\n");
    printf("\t\t\t*\t      *  *  *\n");
    printf("\t\t\t*\t       * * *\n");
    printf("\t\t\t*\t\t *\n");
    printf("\t\t\t*\t       * * *\n");
    printf("\t\t\t*\t      *     *\n");
    printf("\t\t\t\t     *       *\n");
    printf("\t\t  *************\n");
}

void toLower(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void hangMan(int* score,int wrong){
    char missingLetter[4]; //array of letters to guess
    char guess;
    int correctGuess=0 ;//while
    int num = (rand()%10);
    hangDiagram();
    char words[10][15]= {{"mercedes"},{"landrover"},{"citroen"},{"koenigsegg"},{"lamborghini"},{"alfaromeo"},{"generalmotors"},{"volkswagon"},{"maserati"},{"minicooper"}};
    char randomWord[15];

    strcpy(randomWord,words[num]);
    int length=strlen(randomWord);
    
    for(int i=0;i<4;i++){
        int num = (rand()%length);
        for(int j=0;j<length;j++){
            if(j == num){
                missingLetter[i] = randomWord[j];
                randomWord[j] = '*';
            }
        }
    }

    printf("The word to guess is: %s\n",randomWord);
    //doubt
    // for(int i=0;i<5;i++){
    //     printf("%c\n",missingLetter[i]);
    // }
    
    while(correctGuess < 5){
        int found = 0;

        printf("Guess the letter:");
        scanf(" %c", &guess);
        
        for(int i=0;i<5;i++){
            if(guess == missingLetter[i]){
                printf("Correct\n");
                randomWord[i+1]= guess;
                printf("%s\n",randomWord);
                
                correctGuess++;
                found=1;
                break;
            } 
        }

        if(!found){
            wrong++;
            if(wrong == 1){
                printf("OOPS\n");
                hangDiagram1();
                printf("%s\n",randomWord);
            }else if(wrong == 2){
                printf("OOPS\n");
                hangDiagram2();
                printf("%s\n",randomWord);
            }else{
                printf("OOPS\n");
                printf("YOU HUNG HIM TO DEATH\n");
                printf("GAME OVER");
                hangDiagram3();
                break;
            }
        }else{
            for(int i=0;i<length;i++){

            }
            
        }
    }
    

}

int main(){
    printf("\t\t\t\t\t\t\tHello\n\t\t\t\t\t\tWelcome to the epic game\n\t\t\t\t\t\t       HANGMAN\n");
    hangDiagram();
    char name[10],choice[3];
    int score,wrong=0;
    srand(time(NULL));

    printf("Enter your name: ");
    scanf("%s",name);//player name

    playGame:
        printf("Do you wish to play(yes/no): ");
        scanf("%s",choice);
        toLower(choice);

        if(strcmp(choice,"yes") == 0){
            printf("The theme of this game is car companies\n");
            hangMan(&score,wrong);
            
        }else if(strcmp(choice,"no") == 0){
            printf("\t\t\t\tDhanyawaad for playing");
        }else{
            printf("\nOOPS\n");
            goto playGame;
        }

    return 0;
}