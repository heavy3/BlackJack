//
//  Dealer.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/18/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include "Dealer.h"
#include "BlackJackHand.h"

Dealer::Dealer() {
}

void Dealer::dealHand(BlackJackHand * newhand) {
    hand = newhand;
    stay = false;
}

bool Dealer::hitOrStay() {
    if (hand->getValue() < 17) {
        return true;
    }
    else {
        return false;
    }
}