#include <iostream>
#include "car.h"

int main()
{
    setlocale(0, "ru");

    // Static method
    //Car::PrintTravelDistance(70, 2);

    Car mashina = Car(80);
    mashina.Print();
    system("sleep");
}