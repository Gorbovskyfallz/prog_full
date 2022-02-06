#include <iostream>
#include <string>

using namespace std;

int main()
{
cout << "Hello!" << std::endl;
cout << "enter the name" << std::endl;
string name_and_surname;
getline(std::cin, name_and_surname);
cout << "ur name is " << name_and_surname << std::endl;
return 0;
}
