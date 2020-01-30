 /* 
 Practice 1:
 
 write a program that continually accepts positive values from the user, 
 calculates the square of that value 
 and outputs the results to the console. When the user enters '0', execution should stop.*/


#include <iostream>
using namespace std;

int main()
{
int i;
int o;

do
{
cout << "Please enter a positive value: ";
cin >> i ;
o = i * i ;
if (i > 0)
{
    cout << "Your number squared is: " << o << endl ;
} 
} while (i != 0);
 return 0;
} 
