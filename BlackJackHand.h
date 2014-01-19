//
//  BlackJackHand.h
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/18/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#ifndef __BlackJack__BlackJackHand__
#define __BlackJack__BlackJackHand__

#include <iostream>
#include "CardHand.h"
#include "Deck.h"
#include "Card.h"

class BlackJackHand: public CardHand {
public:
    ~BlackJackHand() { }
    BlackJackHand(Card *first, Card *second);
private:
    Card* cardone;
    Card* cardtwo;
    int totalValue;
};

#endif /* defined(__BlackJack__BlackJackHand__) */
