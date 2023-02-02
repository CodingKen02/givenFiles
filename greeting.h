#include <string>

using std::string;

#ifndef GREETING_H
#define GREETING_H

class Greeting
{
    private:
        string name;

    public:
        Greeting();

        // setter
        void setName(string name);

        // getter
        string getName();
};

#endif // GREETING_H
