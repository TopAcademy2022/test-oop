#include <iostream>
#include "Vis.h"

using namespace std;

int main()
{
    setlocale(0, "ru");

    string word = "Рыба";

    Vis myVis = Vis();

    while (myVis.GetStatus())
    {
        char userChar = 0;
        cin >> userChar;

        if (!word.find(userChar))
        {
            myVis.Next();
        }
        //if (false)
        //{
        //    break;
        //}

        myVis.Print();
    }
}