#include "Deck.h"
#include <algorithm>
#include <iostream>

// constructor for Deck objects populates the Deck with 52 Card objects
Deck::Deck() {
	string suits[4] = { "Spades","Hearts","Diamonds","Clubs" };
	string ranks[14] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			Card newCard;
			newCard.suit = suits[j];
			newCard.rank = ranks[i];
			deck.push_back(newCard);
		}
	}
}

void Deck::shuffleDeck() {
	// Seed the random number generator
	std::srand(std::time(0));

	// Use the random_shuffle method from the <algorithm> inclusion
	random_shuffle(deck.begin(), deck.end());
};

int Deck::countCardsInDeck() {
	// return the number of Card objects in the Deck
	return deck.size();
};

Card Deck::dealOneCard() {
	// Remove one card from the 'top' of the deck and return it to the main function to be printed to the console
	Card cardToReturn = deck.at(0);
	deck.erase(deck.begin());
	return cardToReturn;
};