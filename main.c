#include <stdio.h>
#include "game.h"

int main() {
    printf("Welcome to chess!");
    printf("Please enter a command:\n Play\nQuit");

    char command;

    while(scanf(" %c", &command) != 0){
        if(command == 'play'){
            printf("Starting game!");
            break;

        } else if(command == 'quit'){
            return 0;
        } else {
            printf("Invalid command!");
        }
        startGame();
    }
    return 0;
}