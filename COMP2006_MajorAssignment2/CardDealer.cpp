#include "Card.h"
#include "Deck.h"
#include <iostream>

int main() {
	// Program title and information
	cout << "Major Assignment 2: This program will deal the user a chosen amount of cards.\n" << endl;
	cout << "Card Dealer\n" << endl;

	// Generate the deck of Cards
	Deck newDeck;

	// Shuffle the deck of Cards
	newDeck.shuffleDeck();

	// Inform the user that the deck has been shuffled
	cout << "I have shuffled a deck of " << newDeck.countCardsInDeck() << " cards.\n" << endl;

	// Variable to specify how many cards should be dealt
	int userCards = 0;

	// Get and validate user input for number of cards to be dealt
	while (userCards <= 0 || userCards > 52)
	{
		cout << "How many cards would you like?: ";

		cin >> userCards;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Input must be a numerical value." << endl;
			userCards = 0;
		}
		else if (userCards <= 0 || userCards > 52)
		{
			cout << "Input must be between 1 and 52." << endl;
		}
	}

	cout << "\nHere are your cards:" << endl;

	// Write out each of the dealt cards to the console
	for (int i = 0; i < userCards; i++) {
		Card cardToDeal = newDeck.dealOneCard();
		cout << cardToDeal.cardToString() << endl;
	}

	// Inform the user how many cards remain in the deck
	cout << "\nThere are " << newDeck.countCardsInDeck() << " cards left in the deck.\n" << endl;

	cout << "Good luck!";
}