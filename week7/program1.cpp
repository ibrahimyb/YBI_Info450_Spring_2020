#include <iostream>
#include <string> 
using namespace std; 

string reverse(string *s1);
int main() {
    string s1; 
    do{
        cout << "Please enter a string ";
        getline(cin, s1); 
        cout << "String in reverse is: " << reverse(&s1) << endl;  
    } while ( !s1.empty()); 
    
    return 0; 
}

string reverse(string *s1) {
    string retval;
    while (s1->length() > 0)
    {
    char c = s1 -> back();
    retval +=c;
    s1 -> pop_back();
    }
    return retval; 
}
