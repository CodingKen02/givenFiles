#include <iostream>
#include <string>
#include "greeting.h"

using namespace std;

int main()
{
    cout << "A more complicated Hello World" << endl << endl;

    Greeting temp;
    string name;

    cout << "What's your name? ";
    getline(cin, name);

    temp.setName(name);

    cout << "Your name is: " << temp.getName() << endl;

    cout << endl << "End the needlessly complicated code." << endl;

    return 0;
}
