#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number_of_stars;
    int step = 0;
    cout << "enter the number of stars in string!" << endl;
    cin >> number_of_stars;
    cout << "u've entered: " << number_of_stars << endl << endl;

    for (int a = number_of_stars ; a != -1; a-=2)
    {
        cout << endl;


        for (int i = 0; i <= step; i++)
            {
            cout << " ";

            }

        for (int i = 0 ; i < a; i++)
            {

            cout << "*";
            }
    step++;
    }
}
