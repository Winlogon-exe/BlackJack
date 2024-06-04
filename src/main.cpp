#include "Blackjack.h"  

#include <algorithm>
#include <array>
#include <ctime>
#include <iostream>
#include <random>
#include <vector> 


int main() {
    while (true) {
        Deck deck;
        Blackjack blackJack;
        GameResult result = blackJack.play(deck); 

        switch (result) {
        case GameResult::PlayerWon:
            std::cout << "You win!\n";
            break;
        case GameResult::DealerWon:
            std::cout << "You lose!\n";
            break;
        case GameResult::IsTie:
            std::cout << "Tie!\n";
            break;
        }

        std::cout << "Do you want to play another round? (y/n): ";
        char ch;
        std::cin >> ch;

        if (ch != 'y') {
            break;
        }
    }
    return 0;
}