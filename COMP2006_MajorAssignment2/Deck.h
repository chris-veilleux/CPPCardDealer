#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"
using namespace std;

class Deck
{
public:
	Deck();
	vector<Card> deck;
	void shuffleDeck();
	int countCardsInDeck();
	Card dealOneCard();
};

#endif