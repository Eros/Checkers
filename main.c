#include <stdio.h>
#include <stdlib.h>
#include "game.h"

int main() {
    printf("Welcome to chess!");
    printf("Please enter a command:\n Play\nQuit");

    char command;

    while(scanf(" %c", &command) != 0){
        if(command == 'p'){
            printf("Starting game!");
            break;
            startGame();
        } else if(command == 'quit'){
            return 0;
        } else {
            printf("Invalid command!");
        }
    }
    return 0;
}