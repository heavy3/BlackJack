//
//  main.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/9/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include <iostream>
#include "Deck.h"

int main(int argc, const char * argv[])
{
    Deck cardDeck = *new Deck();
    cardDeck.fillDeck();
    cardDeck.printDeck();
    std::cout<< std::endl << std::endl;
    cardDeck.shuffle();
    cardDeck.printDeck();
    std::cout<< std::endl << std::endl;
    cardDeck.shuffle();
    cardDeck.printDeck();
}

