#include "transport.h"

Transport::Transport(unsigned int speed)
{
	this->speed = speed;
}

void Transport::Print()
{
	std::cout << "Speed: " << this->speed << std::endl;
}

unsigned int Transport::GetSpeed()
{
	return this->speed;
}
