#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card
{
public:
	string rank;
	string suit;
	string cardToString();
};

#endif