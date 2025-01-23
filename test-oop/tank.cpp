#include "tank.h"

unsigned short Tank::CalcMaxWeight()
{
	return this->_gunSize * 10;
}

Tank::Tank(unsigned short gunSize)
{
	this->_gunSize = gunSize;
	this->_maxWeight = this->CalcMaxWeight();
}

void Tank::SetGunSize(unsigned short newGunSize)
{
	this->_gunSize = newGunSize;
	this->_maxWeight = this->CalcMaxWeight();
}

void Tank::Print()
{
	std::cout << "Gun size = " << this->_gunSize << std::endl;
	std::cout << "Max weight = " << this->_maxWeight << std::endl;
}
