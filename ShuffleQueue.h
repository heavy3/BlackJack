//
//  ShuffleQueue.h
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/10/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#ifndef __BlackJack__ShuffleQueue__
#define __BlackJack__ShuffleQueue__

#include <iostream>

template <class T>
class ShuffleQueue {
    
public:
    ShuffleQueue<T>();
    ShuffleQueue<T>(T* array []);
    ShuffleQueue<T>(int numElements);
    ~ShuffleQueue<T>() { }
    void shuffle();
    T pop();                        // returns the element in the front of the queue, adjusts front, but doesnt remove element
    void push(T element);           // adds element to the back of queue
private:
    int front;                      // location of first item in queue
    int back;                       // location of last item in queue
    int size;
    T *internalArray;
};

#endif /* defined(__BlackJack__ShuffleQueue__) */
