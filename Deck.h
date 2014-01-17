//
//  Deck.h
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/9/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#ifndef __BlackJack__Deck__
#define __BlackJack__Deck__

#include <iostream>
#include "Card.h"
#include "ShuffleQueue.cpp"

class Deck {
public:
    Deck();
    virtual ~Deck() {}
    void shuffle();
    void fillDeck();
    void printDeck();
    Card* draw();
private:
    ShuffleQueue<Card*> carddeck;
    
};

#endif /* defined(__BlackJack__Deck__) */
