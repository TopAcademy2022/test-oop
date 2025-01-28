#pragma once


#include "transport.h"

class Car : public Transport
{
public:
	void SetSpeed(unsigned int newSpeed);
};
