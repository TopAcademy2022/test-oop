#include <iostream>
#include "car.h"

int main()
{
    setlocale(0, "ru");

    Car mashina = Car(80);
    mashina.Print();
}