/* This program converts gallons to liters using 
float  point numbers. */

#include <iostream>
using namespace std;

int main()
{
    double gallons, liters;

    cout << "Enter number of gallons: ";
    cin >> gallons; // this inputs fron the user 

    liters = gallons *3.7854; //convert to liters 

    cout << "Liters: " << liters;

    return 0; 
}
