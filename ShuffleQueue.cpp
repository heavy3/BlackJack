//
//  ShuffleQueue.cpp
//  BlackJack
//
//  Created by Joseph Pecoraro on 1/10/14.
//  Copyright (c) 2014 Joseph Pecoraro. All rights reserved.
//

#include "ShuffleQueue.h"


template <class T> ShuffleQueue<T>::ShuffleQueue() {
    internalArray = new T[100];
    srand(time(NULL));
}

template <class T> ShuffleQueue<T>::ShuffleQueue(T* array []) {
    int arrsize = array->length;
    internalArray = new T[arrsize];
    for (int i =0; i < arrsize; i ++) {
        internalArray[i] = array[i];
    }
    front = 0;
    back = arrsize;
    size = arrsize;
    srand(time(NULL));
    shuffle();
}

template <class T> ShuffleQueue<T>::ShuffleQueue(int numElements) {
    internalArray = new T[numElements];
    front = 0;
    back = 0;
    size = numElements;
    srand(time(NULL));
}

template <class T>
void ShuffleQueue<T>::shuffle() {
    int j = 0;
    T temp;
    for (int i = size-1; i > 0; i--) {
        j = rand() % i;
        temp = internalArray[i];
        internalArray[i] = internalArray[j];
        internalArray[j] = temp;
    }
    front = 0;
}

template <class T>
T ShuffleQueue<T>::pop() {
    front++;
    return internalArray[front-1];
}

template <class T>
void ShuffleQueue<T>::push(T element) {
    
    if (back == size) {
        std::cerr << "queue is full" << std::endl;
    }
    else {
        internalArray[back] = element;
        back++;
    }
}