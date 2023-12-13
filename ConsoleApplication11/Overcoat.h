#pragma once

using namespace std;

class Overcoat
{
private:
	string name;
	string color;
	int price;

public:
	Overcoat() : name{ "Template" }, color{ "White" }, price{ 0 } {}
	Overcoat(string name, string color, int price) : name{name}, color{color}, price{price} {}

	bool operator == (Overcoat& other)
	{
		if (color == other.color)return true;
		else return false;
	}

	bool operator >(Overcoat& other)
	{
		if (price > other.price)return true;
		else return false;
	}

	void operator = (Overcoat& other)
	{
		name = other.name;
		color = other.color;
		price = other.price;
	}

	friend ostream& operator << (ostream& os, Overcoat& coat)
	{
		os << "Name: " << coat.name << endl;
		os << "Color: " << coat.color << endl;
		os << "Price: " << coat.price << endl;

		return os;
	}
};