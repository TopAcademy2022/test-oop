#pragma once
#include <iostream>

class User
{
private:
	unsigned int age;

	unsigned int amountSteps;
public:
	User(unsigned int age);

	void setAge(unsigned int age);

	void print();
};

