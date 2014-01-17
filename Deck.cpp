//
//  Deck.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/9/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include "Deck.h"
#include <sstream>

Deck::Deck() {
    carddeck = *new ShuffleQueue<Card*>(52);
}

void Deck::shuffle() {
    carddeck.shuffle();
}

void Deck::printDeck() {
    for (int i = 0; i < 52; i ++) {
        carddeck.pop()->print();
    }
}

void Deck::fillDeck() {
    Card* newCard;
    for (int i=2; i <11; i++) {
        for (int j=0; j < 4; j ++) {
            stringstream ss;
            ss << i;
            string str = ss.str();
            newCard = new Card(str, j);
            carddeck.push(newCard);
        }
    }
    for (int i=11; i <15; i++) {
        for (int j=0; j < 4; j ++) {
            newCard = new Card(i, j);
            carddeck.push(newCard);
        }
    }
}

Card* Deck::draw() {
    return carddeck.pop();
}