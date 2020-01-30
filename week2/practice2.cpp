/*
Practice2:

Write a program that continually accepts values from the user, determines if the value is a prime number 
and prints the result to the console. When the user enters a 0, then execution stops.
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  int i;
  bool Prime = true;
  do
  {
  
  cout << "Enter a number: ";
  cin >> n;
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          Prime = false;
          break;
      }
  }
  if (Prime)
      cout << "The Number you entered is a prime number";
  else
      cout << "The Number you entered is NOT a prime number";
  }while(n != 0);
  return 0;
}
