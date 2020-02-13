#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int getUserInput();
double CalcMean(int numbers[]);
double MeanSD(int numbers[], double mean);

int getUserInput(){
    int value;
    cout << "Please enter a whole number." << endl;
    cin >> value;
    return value;
}

double CalcMean(int numbers[]){
    int sum = 0;
    double mean;
    for(int i = 0; i < 10; i++)
    {
      sum += numbers[i]; 
    }
    mean = double(sum)/10;
    return mean;
}
double MeanSD(int numbers[], double mean){
    double sd=0;
    double squaredsd;
   
    for(int i = 0; i < 10; i++)
    {
        sd += (numbers[i]-mean)*(numbers[i]-mean);
    }
    squaredsd  = sqrt(sd/10);
}

int main(){
    int NumberArray[10];
    double mean;
    double meansd;
    for(int i = 0; i < 10; i++)
    {
        NumberArray[i]=getUserInput();
    }
    cout << "The array: " << endl;
    for(int j = 0; j < 10 ; j++)
    {
        cout << j+1 <<": "<< NumberArray[j] << endl;
    }

    mean = CalcMean(NumberArray);
    cout << "The mean value is: " << mean << endl; 

    meansd = MeanSD(NumberArray, mean);
    cout << "The mean of your squared difference is: " << meansd << endl; 


    return 0;
}