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

class Dealer {
public:
    Dealer();
    void dealHand(BlackJackHand* newhand);
    bool hitOrStay(); //true hit, false stay
private:
    BlackJackHand* hand;
};

#endif /* defined(__BlackJack__Dealer__) */
