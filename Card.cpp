//
//  Card.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/9/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include "Card.h"

Card::Card(string cardname, string cardsuit){
    name = cardname;
    suit = cardsuit;
}

Card::Card(string cardname, int numsuit){
    name = cardname;
    suite = numsuit;
    switch (suite) {
        case 0:
            suit = "Spades";
            break;
        case 1:
            suit = "Clubs";
            break;
        case 2:
            suit = "Hearts";
            break;
        case 3:
            suit = "Diamonds";
            break;
        default:
            break;
    }
}

Card::Card(int nameValue, int numsuit){
    suite = numsuit;
    switch (nameValue) {
        case 11:
            name = "Jack";
            break;
        case 12:
            name = "Queen";
            break;
        case 13:
            name = "King";
            break;
        case 14:
            name = "Ace";
            break;
        default:
            break;
    }
    switch (suite) {
        case 0:
            suit = "Spades";
            break;
        case 1:
            suit = "Clubs";
            break;
        case 2:
            suit = "Hearts";
            break;
        case 3:
            suit = "Diamonds";
            break;
        default:
            break;
    }
}

void Card::print() {
    std::cout<< name << " of " << suit <<endl;
}