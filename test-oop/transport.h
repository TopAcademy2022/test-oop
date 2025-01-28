#pragma once


#include <iostream>

class Transport
{
protected:
	unsigned int speed;

public:
	Transport(unsigned int speed);

	void Print();

	unsigned int GetSpeed();
};

