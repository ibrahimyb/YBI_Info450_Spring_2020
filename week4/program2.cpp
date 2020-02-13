#include <iostream>
#include <stdio.h>
using namespace std;

const int Maxstu = 30;
const int Maxsize = 100;
int main(){
  int x = 0;
  int count  = 0;
  char students[Maxstu][Maxsize];
  for(x = 0;x < Maxstu;x++){
    strcpy(students[x], "");
  }
  for(x = 0;x < Maxstu;x++){
    cout << "Please enter student for index " << x << " :";
    cin.getline(students[x], Maxsize);
    if (!strcmp("\0", students[x]) ){
      cout << "This is the end of your list" << endl;
      break;
    }
    count++ ;
  }
  for(x = 0;x < count;x++){
    cout << "students " << x << " is " << students[x] << endl;
  }

  return 0;
}
