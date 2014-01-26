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
#include "BlackJackHand.h"
#include <ctype.h>

int main(int argc, const char * argv[])
{
    Deck cardDeck = *new Deck();
    cardDeck.fillDeck();
    cardDeck.shuffle();
    
    bool quit = true;
    bool handIsGood = true;
    while (quit) {
        while (handIsGood) {
            
        }
    }
    
}

