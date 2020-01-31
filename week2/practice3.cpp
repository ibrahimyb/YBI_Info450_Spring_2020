/*
Practice3: 

Write a program that continually accepts a year value from a user and 
determines if it is a leap year.

*/  




#include <iostream>
using namespace std;

int main()
{
int y;
int o = 4;
int f =100;
int h =400;
char year= 'y';
while(year== 'y')
{
cout << " Please enter a year: ";
cin >> y ;
if(y%h ==0)
{
    cout << "Your year " << y << " is a leap year     " ;
}else if(y%f ==0){
     cout << "Your year " << y << " is NOT a leap year    " ;
}else if(y%o ==0){
     cout << "Your year " << y << " is a leap year    " ;
}
else
{
    cout << "Your year " << y << " is NOT a leap year    " ;
}
}
return 0;
} 
