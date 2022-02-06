#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()
{
int cat1;
int cat2;
double hip;
cout << "enter two legs of triangle!" << endl;
cin >> cat1 >> cat2;
cout << "u entered: " << cat1 << " " << cat2 << endl;
hip = sqrt((cat1*cat1)+(cat2*cat2));
cout << "hip = " << hip << endl;
}
