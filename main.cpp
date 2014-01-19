//
//  main.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/9/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include <iostream>
#include <string>
#include "Deck.h"
#include "Card.h"
#include <ctype.h>

bool playHiLo(Deck * cardDeck) {
    char choice;
    Card playercard = *cardDeck->draw();
    playercard.print();
    cout << "Hi or Low(H/L)?: ";
    cin >> choice;
    choice = toupper(choice);
    Card nextCard = *cardDeck->draw();
    nextCard.print();
    if (nextCard.getValue()-playercard.getValue() >= 0) {
        if (choice == 'H') {
            cout << "Correct! the next card was higher" << endl;
            return true;
        }
        else {
            cout << "Sorry, the next card was lower" << endl;
            return false;
        }
    }
    else if (nextCard.getValue()-playercard.getValue() < 0) {
        if (choice == 'L') {
            cout << "Correct! the next card was lower" << endl;
            return true;
        }
        else {
            cout << "Sorry, the next card was higher" << endl;
            return false;
        }
    }
    return true;
}


int main(int argc, const char * argv[])
{
    Deck cardDeck = *new Deck();
    cardDeck.fillDeck();
    cardDeck.shuffle();
    
    bool win = true;
    char continu;
    
    while (win) {
        win = playHiLo(&cardDeck);
        if (!win) {
            cout << "keep playing(y/n)?: ";
            cin >> continu;
            continu = toupper(continu);
            
            if (continu == 'Y') {
                win = true;
            }
            else {
                win=false;
            }
        }
    }
}

