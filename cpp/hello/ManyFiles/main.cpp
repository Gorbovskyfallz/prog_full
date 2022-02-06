
#include "header.h"
#include "typeinfo"
#include <iostream>
#include <iomanip>

void prime_number(int x)
{
    if (x>10)
    {
        std::cout << "u entered number > 10!" << std::endl;
    }
    else if ((x == 3) || (x == 5) || (x == 7))
    {
        std::cout << "prime!" << std::endl;
    }
    else
    {
        std::cout << "not a prime!" << std::endl;
    }
}

int user_entering()
{
    std::cout << "Please, enter the number!" << std::endl;
    int user_number;
    std::cin >> user_number;
    std::cout << "u've entered this number:" << user_number << std::endl;
    return user_number;

}


 int main()
{

    prime_number(user_entering());


	return 0;
}
