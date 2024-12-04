#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void toLower(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void printBoard(int tictac[3][3]) {
    printf("\nCurrent Board:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tictac[i][j] == 0)
                printf(" . ");
            else if (tictac[i][j] == 1)
                printf(" X ");
            else
                printf(" O ");
        }
        printf("\n");
    }
}

void playGame() {
    int pos1, pos2;
    int tictac[3][3] = {0};
    int player = 1;

    for (int moves = 0; moves < 9; moves++) {
        printBoard(tictac);
        printf("Player %d, enter your move:\n", player);
        printf("Enter coordinate x (0-2): ");
        scanf("%d", &pos1);
        printf("Enter coordinate y (0-2): ");
        scanf("%d", &pos2);

        if (pos1 >= 0 && pos1 < 3 && pos2 >= 0 && pos2 < 3) {
            if (tictac[pos1][pos2] == 0) {
                tictac[pos1][pos2] = player;
                player = (player == 1) ? 2 : 1; 
            } else {
                printf("Cell already occupied. Try again.\n");
                moves--;
            }
        } else {
            printf("Invalid coordinates. Try again.\n");
            moves--;
        }
    }
    printf("\nGame Over! Here's the final board:\n");
    printBoard(tictac);
}

int main() {
    char choice[10];

    while (1) {
        printf("Do you wish to play? (yes/no): ");
        scanf("%s", choice);
        toLower(choice);

        if (strcmp(choice, "yes") == 0) {
            playGame();
        } else if (strcmp(choice, "no") == 0) {
            printf("Thank you for playing!\n");
            break;
        } else {
            printf("Invalid input. Please enter 'yes' or 'no'.\n");
        }
    }

    return 0;
}