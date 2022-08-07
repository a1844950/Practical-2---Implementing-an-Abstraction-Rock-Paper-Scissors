#include "ComputerPlayer.h"
#include "HumanPlayer.h"
#include "Referee.h"
#include <iostream>

int main() {
    int numOfPlays = 4; //this stores the number of times you want to play the game

    HumanPlayer human;
    ComputerPlayer computer;
    Referee referee;

    while (numOfPlays!=0){
        std::cout<<referee.refGame(human,computer)<<std::endl;
        numOfPlays--;
    }

    return 0;
}
