#pragma once


#include <iostream>

class Tank
{
private:
	unsigned short _gunSize;

	unsigned short _maxWeight;

	unsigned short CalcMaxWeight();

public:
	Tank(unsigned short gunSize);

	void SetGunSize(unsigned short newGunSize);

	void Print();
};
