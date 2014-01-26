
//
//  BlackJackHand.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/18/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include "BlackJackHand.h"
#include "Deck.h"
#include "Card.h"
#include <vector>

BlackJackHand::BlackJackHand() {
    cards = *new vector<Card*>();
    numCards=0;
    isSoft = NULL;
    is21 = false;
    isBust = false;
    totalValue = 0;
}

BlackJackHand::BlackJackHand(Card* first) {
    cards = *new vector<Card*>();
    cards.push_back(first);
    numCards = 1;
    isSoft = NULL;
    is21 = false;
    isBust = false;
    totalValue = 0;
    calcValue();
}

void BlackJackHand::add(Card* newCard) {
    if (!canAdd()) {
        return;
    }
    numCards++;
    cards.push_back(newCard);
    calcValue();
}

void BlackJackHand::calcValue() {
    int tempValue=0;
    totalValue=0;
    for (int i=0; i <numCards; i++) {
        tempValue = cards[i]->getValue();
        if (tempValue <=10) {
            totalValue+=tempValue;
        }
        else if (tempValue <=13) {
            totalValue+=10;
        }
        else {
            totalValue+=calcAceValue();
        }
    }
    if (totalValue < 21) {
        is21 = false;
        isBust =false;
    }
    else if (totalValue == 21) {
        is21 = true;
        isBust = false;
    }
    else {
        isBust = true;
    }
}

int BlackJackHand::calcAceValue() {
    int tempValue;
    if (isSoft == NULL) {
        tempValue = 11+totalValue;
        if (tempValue <= 21) {
            isSoft = true;
            return 11;
        }
        else {
            isSoft = false;
            return 1;
        }
    }
    else if (isSoft) {
        tempValue = 11+totalValue;
        if (tempValue <= 21) {
            isSoft = true;
            return 11;
        }
        else {
            isSoft = false;
            return 1;
        }
    }
    else {
        isSoft = false;
        return 1;
    }
}

void BlackJackHand::printStatus() {
    if (is21) {
        std::cout << "BlackJack" << std::endl;
    }
    else if(isBust) {
        std::cout << "Busted!" << std::endl;
    }
    else {
        std::cout << "You're Good" << std::endl;
    }
}

bool BlackJackHand::canAdd() {
    if (is21 || isBust) {
        return false;
    }
    return true;
}

void BlackJackHand::printCardsValue() {
    for (int i =0; i < numCards; i++) {
        cards[i]->print();
    }
    std::cout << totalValue << std::endl;
}