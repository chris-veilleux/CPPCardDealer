#include "Card.h"

string Card::cardToString() {
	// Return a user-friendly description of the card
	return rank + " of " + suit;
}