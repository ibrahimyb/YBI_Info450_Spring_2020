/*Write a program that asks the user for the radius of a circle and using a function, calculate the circumference of the circle.

Requirement: The function MUST match this signature:*/

#include <iostream>
using namespace std;
const float PI = 3.14159265358979323846;
double calculateCircumference(double radius);
int main(){
    double radius;
    double circum;
    cout << "Enter the radius of your circle: ";
    cin >> radius;
    circum = calculateCircumference(radius);
    cout << "The circumference of your circle is: " << circum ;
}

double calculateCircumference(double radius){
double Circumference;
Circumference = 2*PI*radius;
return Circumference;
}
