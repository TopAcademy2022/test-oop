#include "car.h"

void Car::SetSpeed(unsigned int newSpeed)
{
	this->speed = newSpeed;
}

void Car::Print()
{
	// Use base class Print()
	//Transport::Print();
	std::cout << "Car speed: " << this->speed << std::endl;
}

void Car::PrintTravelDistance(int speed, int time)
{
	std::cout << "Travel Distance: " << speed * time << std::endl;
}
