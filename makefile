OBJS = ShuffleQueue.o Deck.o Card.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

BlackJack : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o BlackJack

ShuffleQueue.o : ShuffleQueue.h ShuffleQueue.cpp
	$(CC) $(CFLAGS) ShuffleQueue.cpp

Deck.o : Deck.h Deck.cpp ShuffleQueue.h
	$(CC) $(CFLAGS) Deck.cpp

Card.o : Card.h Card.cpp
	$(CC) $(CFLAGS) Card.cpp

main.o : main.cpp Card.h Card.cpp Deck.h Deck.cpp ShuffleQueue.h ShuffleQueue.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	\rm *.o *~ BlackJack