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
    Card(string name, string suit);
    Card(string name, int suit);
    Card(int nameValue, int suit);
    virtual ~Card() {}
    void print();
private:
    int value;              //1-10 is number value, j q and k are 10 ace is 1 or 11 (not sure how to implement yet)
    string name;            //
    int suite;              //0=Spades 1=Clubs 2=Hearts 3=Diamonds
    string suit;           //Spades Clubs Hearts Diamonds
    
};

#endif /* defined(__BlackJack__Card__) */
