#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int n = 1000;
  ofstream out;
  out.open("randoms");
      for (int i = 0; i < n; i++)
      {
        out << rand()%10000 -9999 + 19998 << endl;
      }
  return 0;
}
