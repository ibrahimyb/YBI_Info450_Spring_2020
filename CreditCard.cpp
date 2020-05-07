#include <iostream>
#include <string>
using namespace std;

class CreditCard : public account {
  void CreditCard :: DoCharge( string name, double amount ){
        set_balance(get_balance()-amount);
        for (int i = 0; i < 10; i++)
        {
            if (last10withdraws[i] ==0 && last10charges[i]== 0)
            {
                last10withdraws[i] = amount;
                last10charges[i] = name;
                account :: numwithdraws[i+1];
                return;
            }
            
        }
        for (int i = 0; i < 10; i++)
        {
            if (i< 9)
            {
                last10withdraws[i] = last10withdraws[i+1];
                last10charges[i] =last10charges[i+1]
            }
            
        }
        
    }
    void CreditCard :: MakePayment( double amount ){
        set_balance(get_balance()-amount);
        for (int i = 0; i < 10; i++)
        {
            if (last10deposits[i] ==0 )
            {
                last10deposits[i] = amount;
                account :: last10deposits[i+1];
                return;
            }
            
        }
        for (int i = 0; i < 10; i++)
        {
            if (i< 9)
            {
                last10deposits[i] = last10deposits[i+1];
            }
            
        }
        
    }
};
