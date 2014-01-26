//
//  Dealer.h
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/18/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#ifndef __BlackJack__Dealer__
#define __BlackJack__Dealer__

#include <iostream>
#include "BlackJackHand.h"
#include "Card.h"

class Dealer {
public:
    Dealer();
    void dealHand(BlackJackHand* newhand);
    void add(Card* card);
    bool hitOrStay(); //true hit, false stay
    int getValue() {return hand->getValue(); }
private:
    BlackJackHand* hand;
};

#endif /* defined(__BlackJack__Dealer__) */
