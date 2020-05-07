#include <iostream>
#include <string>
using namespace std;

class account {
  private:
    string name; 
    long taxID;
    double balance;
  protected:
    int numdeposits;
    int numwithdraws;
  public:
    int last10checks[10];
    double last10withdraws[10];
    double last10deposits[10];
    string last10charges[10];
    long cardnumber;
    void set_name(string n) { name = n; }
    int get_name() { return name; }
    void set_taxID(long id) { taxID = id; }
    int get_taxID() { return taxID; }
    void set_balance(int num) { balance = num; }
    int get_balance() { return balance; }
    void MakeDeposit( double amount ){
        balance= balance + amount;
        numdeposits = numdeposits + 1;
    }
    account(){
    int numdeposits;
    }
    account(string name, long taxID, double balance)
    ~account();  
    int size() const
    {
        return numdeposits;
    }
    void show();
};

void account::show(){
  cout << "Name        : " << get_name() << endl;
  cout << "TaxID    : " << get_taxID() << endl;
  cout << "Balance    : " << get_balance() << endl;
}
