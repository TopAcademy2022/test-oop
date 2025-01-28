#pragma once


#include "transport.h"

class Car : public Transport
{
public:
	Car(unsigned int speed) : Transport(speed) {}

	void SetSpeed(unsigned int newSpeed);

	void Print() override;

	static void PrintTravelDistance(int speed, int time);
};
