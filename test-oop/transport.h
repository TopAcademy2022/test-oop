#pragma once


#include <iostream>

class Transport
{
protected:
	unsigned int speed;

public:
	Transport();

	void Print();

	unsigned int GetSpeed();
};

