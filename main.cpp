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
#include "Dealer.h"
#include <ctype.h>

void dealerPlay(Deck* deck, BlackJackHand* hand) {
    Dealer* dealer = new Dealer();
    dealer->dealHand(hand);
    while (dealer->hitOrStay()) {
        hand->printCardsValue();
        std::cout << "hit" << std::endl;
        dealer->add(deck->draw());
    }
    hand->printCardsValue();
    hand->printStatus();
}

int main(int argc, const char * argv[])
{
    Deck cardDeck = *new Deck();
    cardDeck.fillDeck();
    cardDeck.shuffle();
    
    bool deal = true;
    char continu;
    
    while (deal) {
        BlackJackHand hand = *new BlackJackHand();
        hand.add(cardDeck.draw());
        hand.add(cardDeck.draw());
        dealerPlay(&cardDeck, &hand);
        std::cout << std::endl << "Deal (Y/N): ";
        cin >> continu;
        continu = toupper(continu);
        
        if (continu == 'Y') {
            deal = true;
        }
        else {
            deal=false;
        }
    }
}

