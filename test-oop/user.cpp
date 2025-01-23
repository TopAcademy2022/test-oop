#include "user.h"

unsigned int countAmountSteps(unsigned int age) {
	return age * 500;
}

User::User(unsigned int age) {
	this->age = age;
	this->amountSteps = countAmountSteps(age);
}

void User::setAge(unsigned int newAge) {
	this->age = newAge;
	this->amountSteps = countAmountSteps(age);
}

void User::print() {
	std::cout << this->age << std::endl;
}