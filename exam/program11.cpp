#include <iostream>
#include <string> 
using namespace std; 

void reverse(string *s1)
int main() {
    string s1 = 0; 
    do{
        cout << "Please enter a string "
        cin.getline(s1, 100); 
        reverse(s1); 
        cout << "String in reverse is: " << s1 << "."; 
        getline (std :: cin, s1); 
    } while ( !s1.empty()); 
    
    return 0; 
}

string reverse(string *s1) {
    reverse(s1.beginning(), s1.end())
    return ; 
}
