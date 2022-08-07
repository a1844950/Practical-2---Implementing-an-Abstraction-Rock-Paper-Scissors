#include "Referee.h"

Referee::Referee() {}
char Referee::refGame(Human player1, Computer player2) {
    char playerMove = player1.makeMove();
    char computerMove = player2.makeMove();
    //as computer always plays 'R' we can remove 'other if statement'
    if (playerMove=='R'){
        if (computerMove=='R') return 'T';
        else if (computerMove=='P') return 'L'; //'other if statement'
        else return 'W'; //'other if statement'
    } else if (playerMove=='P'){
        if (computerMove=='R') return 'W';
        else if (computerMove=='P') return 'T'; //'other if statement'
        else return 'W'; //'other if statement'
    } else { //for player move == 'S'
        if (computerMove=='R') return 'L';
        else if (computerMove=='P') return 'W'; //'other if statement'
        else return 'T'; //'other if statement'
    }
}
