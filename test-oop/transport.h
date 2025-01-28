#pragma once


#include <iostream>

class Transport
{
protected:
	unsigned int speed;

public:
	Transport(unsigned int speed);

	virtual void Print();

	unsigned int GetSpeed();
};
