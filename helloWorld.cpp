// library includes
#include <iostream>
#include <string>

// using statements
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
  cout << "Hello World" << endl << endl;

  string name;
  cout << "What's your name? ";
  getline(cin, name);

  cout << "Hello, " << name << endl;

  return 0;
}
