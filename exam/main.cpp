#include <iostream>
#include <string>

using namespace std;

int main(){
 checkings c;
 savings s;
 CreditCard cc;
 t1.set_name();
 t1.set_taxID();
 t1.set_balance(100);
 c.set_name();
 c.set_taxID();
 c.set_balance(100);
 cc.set_name();
 cc.set_taxID();
 cc.set_balance(100);
 t1.show();
 c.show();
 cc.show();
 account a1 = c;
 account a2 = s;
 account a3 = cc;
cout << "To check bank account enter a positive numner: ";
int ac;
cin >> ac ;
do{
    s.DoWithdraw();
    s.MakeDeposit();
    c.WriteCheck();
    cc.MakePayment();
    cc.DoCharge();
    a1.show();
    a2.show();
    a3.show();
} 
}while (ac != 0)
