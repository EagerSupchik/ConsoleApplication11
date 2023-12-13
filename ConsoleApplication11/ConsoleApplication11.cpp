#include <iostream>
#include <string>
#include "Overcoat.h"

using namespace std;

int main()
{
    Overcoat coat{ "Coat", "Black", 5000 };
    Overcoat jacket{ "Jacket", "Red", 3000 };
    Overcoat jacket2{ "New Jacket", "Blue", 3500 };

    if (!(jacket == jacket2))
    {
        cout << jacket2;
    }
    else
    {
        cout << jacket;
    }

    if (jacket > coat)
    {
        cout << "Cheap" << endl;
    }
    else cout << coat;

    coat = jacket2;
    cout << coat;
}