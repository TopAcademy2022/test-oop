#include "transport.h"

Transport::Transport()
{
	this->speed = 100;
}

void Transport::Print()
{
	std::cout << "Speed: " << this->speed << std::endl;
}
