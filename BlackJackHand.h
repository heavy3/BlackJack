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
#include <vector>

class BlackJackHand: public CardHand {
public:
    ~BlackJackHand() { }
    BlackJackHand();
    BlackJackHand(Card *first); //hand starts with one card you will get two, but not right in a row
    void add(Card *newCard);
    void calcValue();
    int getValue() {return totalValue;}
    int calcAceValue();
    bool canAdd();
    bool willStay() { return stay; }
    void printCardsValue();
    void printStatus();
private:
    vector<Card*> cards;
    int numCards;
    int totalValue;
    bool isBust;
    bool is21;
    bool stay;
    bool isSoft;
};

#endif /* defined(__BlackJack__BlackJackHand__) */
