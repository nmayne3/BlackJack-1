#pragma once
#include<string>
class Card
{
	enum cardFace { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King } cardFace;
	enum cardSuit { Spades, Clubs, Diamonds, Hearts }cardSuit;

public:
	Card(enum cardFace, enum cardSuit)
	{
		this->cardFace = cardFace;
		this->cardSuit = cardSuit;
	}
	int GetCardValue();

	std::string GetCardFace();

	std::string GetCardSuit();

	void Flip();

	//friend ostream& operator << (ostream& os, const Card& card);
};