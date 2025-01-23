#include <iostream>
#include "tank.h"

int main()
{
    setlocale(0, "ru");

    Tank t34 = Tank(34);
    t34.SetGunSize(350);
    t34.Print();
}