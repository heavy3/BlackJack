//
//  Card.h
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/9/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#ifndef __BlackJack__Card__
#define __BlackJack__Card__

#include <iostream>
#include <string>

using namespace std;

class Card {
public:
    Card();
    Card(int nameValue, int suit);
    int getValue() {return value; }
    virtual ~Card() {}
    void print();
private:
    int value;              //1-10 is number value, j=11, q=12, k=13, ace=14 - BlackJack Value calculated in game
    string name;            //
    int suite;              //0=Spades 1=Clubs 2=Hearts 3=Diamonds
    string suit;           //Spades Clubs Hearts Diamonds
    
};

#endif /* defined(__BlackJack__Card__) */
