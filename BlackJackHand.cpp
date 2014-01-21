//
//  BlackJackHand.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/18/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include "BlackJackHand.h"
#include <vector>

BlackJackHand::BlackJackHand(Card* first, Card* second) {
    cards = *new vector<Card*>();
    cards.push_back(first);
    cards.push_back(second);
    numCards = 2;
    
}

void BlackJackHand::add(Card* newCard) {
    numCards++;
    cards.push_back(newCard);
}