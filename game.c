#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//
// Created by George on 08-Mar-18.
//

struct cs {
    char column;
    int row;
    int player;
};

struct game {
    struct cs * coords;
    int player1;
    int player2;
};

int winCheck(struct game * g){
    if(g -> player1 == 0){
        return 2;
    } else if(g -> player2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int searchCoordinates(char column, int row, struct game * g){
    int length = g -> player1 + g -> player2;
    struct cs * coords = g-> coords;
    for(int i = 0; i < length; i++){
        if(((coords[i]).row == row) && ((coords[i]).column == column)){
            if(coords[i].player == 1){
                return 1;
            } else {
                return 2;
            }
        }
    }
    return 0;
    //should never happen
}

void makeBoard(struct game * g){
    printf("A B C D E F G\n");
    printf("-------------\n");
    int currentRow;
    int currentColumn;
    for(currentRow = 8; currentRow > 0; --currentRow){
        printf("%d |", currentRow);
    }
    for(currentColumn = 'A'; currentColumn <= 'H'; ++currentColumn){
        int search = searchCoordinates(currentColumn, currentRow, g);
        if(search == 0){
            printf(" ");
        } else if(search == 1){
            printf(" *");
        } else {
            printf(" +");
        }
    }
    printf("|\n");
    printf("-------------\n");
}

bool checkMove(int oldRow, char oldColumn, int newRow, char newColumn, struct game * g){
    int player = searchCoordinates(oldColumn, oldRow, g);
    int toSearch = searchCoordinates(newColumn, newRow, g);

    if(player == 0){
        return false;
        printf("Player has been defined as 0");
    }
    //prevents players from doing moves on a place that is already occupied
    if(player == 1 && toSearch == 1){
        return false;
    }
    if(player == 2 && toSearch == 2){
        return false;
    }

    int validColumn = (('A' <= newColumn) && (newColumn <= 'H')) || (('a' <= newColumn && (newColumn <= 'h')));
    int cc = validColumn && ((newColumn == oldColumn - 1) || (newColumn == oldColumn + 1));
    int vr = ((1 <= newRow) && (newRow <= 8));
    int rc = newColumn && ((newRow == oldRow - 1) || (newRow == oldRow + 1));
    return (bool) (rc + cc); //idek if this will work or not but fuck it
}

void removePiece(int row, char column, struct game * g){
    int position = 0;
    int length = (g -> player1 + g -> player2);

    for(; position < length; ++position) {
        if ((g->coords[position].row == row) && (g->coords[position].column == column)) {
             break;
            //should make this do something really
        }
        int temporaryRow = g -> coords[position].row;
        char temporaryColumn = g -> coords[position].column;
        int temporaryPlayer = g -> coords[position].player;

        g -> coords[position].row = g -> coords[length - 1].row;
        g -> coords[position].column = g -> coords[length - 1].column;
        g -> coords[position].player = g -> coords[length - 1].player;
        g -> coords[length - 1].row = temporaryRow;
        g -> coords[length - 1].column = temporaryColumn;
        g -> coords[length - 1].player = temporaryPlayer;

        g -> coords = realloc(g -> coords, (length - 1) * sizeof(struct cs));
    }
}

void handleMove(int oldRow, char oldColumn, int newRow, char newColumn, struct game * g){
    if(!checkMove(oldRow, oldColumn, newRow, newColumn, g)){
        return; //again should never happen
    }

    int player = searchCoordinates(oldColumn, oldRow, g);
    int search = searchCoordinates(newRow, newColumn, g);
    int length = g -> player1 + g -> player2;

    struct cs * coords = g -> coords;
    if((player == 1 && search == 0) || (player == 2 && search == 0)){
        for(int i = 0; i < length; ++i){
            if(((coords[i].row == oldRow) && ((coords[i].column == oldColumn)))){
                g -> coords[i].row = newRow;
                g -> coords[i].column = newColumn;
                return;
            }
        }
    } else if(player == 1 && search == 2){
        removePiece(newRow, newColumn, g);

        g -> player2 -= 1;

        for(int i = 0; i < length - 1; ++i){
            if(((coords[i].row == oldRow) && ((coords[i].column == oldColumn)))){
                g -> coords[i].row = newRow;
                g -> coords[i].column = newColumn;
                return;
            }
        }
    } else {
        removePiece(newRow, newColumn, g);

        g -> player1 -= 1;

        for(int i = 0; i < length - 1; ++i){
             if(((coords[i].row == oldRow) && (coords[i]).column == oldColumn)){
                 g -> coords[i].row = newRow;
                 g -> coords[i].column = newColumn;
                 return;
             }
        }
    }
    return;
}

void handleBoardDefaultValues(struct game * g) {
    //todo
}

void startGame(void) {
    struct game *g = malloc(sizeof(struct game));
    g->coords = malloc(24 * sizeof(struct cs));

    g->player1 = 12;
    g->player2 = 12;

    handleBoardDefaultValues(g);
    makeBoard(g);

    int firstPlayer = 0;
    int random = rand();
    if (random % 2 == 0) {
        firstPlayer = 1;
    }
    if (random % 2 == 1) {
        firstPlayer = 2;
    }

    int currentTurn = firstPlayer;

    printf("Player going first: %d", &firstPlayer);
    printf("How to play: ");
    printf("m: moves a piece");
    printf("quit: exits the game");
    printf("score: views the current score");
    printf("print: reprints the board");

    char command;

    while (scanf(" %c ", &command) != 0) {
        if (winCheck(g) != 0) {
            printf("Player %d won the game! Play again? Y/N", winCheck(g));
            if (command == 'y') {
                //todo replay
            }
            if (command == 'p') {
                makeBoard(g);
            }
            if (command == 'q') {
                printf("Someone has decided to rage quit!");
                return;
            }
            if (command == 'm') {
                printf("Please enter the destination you wish to move to: \n");
                int oldRow = 0;
                char oldColumn = 0;
                int newRow = 0;
                char newColumun = 0;
                scanf(" %c", &oldColumn);
                scanf(" %d", &oldRow);
                scanf(" %c", &newColumun);
                scanf(" %d", &newRow);

                if (checkMove(oldRow, oldColumn, newRow, newColumun, g)) {
                    printf("Move successful!");
                    handleMove(oldRow, oldColumn, newRow, newColumun, g);
                    makeBoard(g);
                } else if (!checkMove(oldRow, oldColumn, newRow, newColumun, g)){
                    printf("That move is not valid! Please try again");
                }
            }
            if(command == 'score'){
                printf('Score:\n Player1: %d\n Player2: %d\n', 12 - g -> player1, 12 - g -> player2);
            }
            if(command != 'm' || command != 'quit' || command != 'score' || command != 'print'){
                printf("That command is not valid!");
            }
        }
        free(g -> coords);
        free(g);
    }
}

void clearStdin(){
    char discard[255] = "";
    fgets(discard, sizeof(discard), fgets);
}
