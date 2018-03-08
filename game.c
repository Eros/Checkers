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



