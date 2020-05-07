#include "checking.h"
#include <iostream>
#include <string>
using namespace std;

class checkings : public account {
    set_name();
    set_taxID();
    set_balance();
    account:: numdeposits = 0;
    account:: numwithdraws = 0;
    for (int i = 0; i < 10; i++)
    {
       last10withdraws[i] = 0;
       last10deposits[i] = 0;
       last10checks[i] = 0;
    }
    void Checking :: WriteCheck( int checknum, double amount ){
        set_balance(get_balance()-amount);
        for (int i = 0; i < 10; i++)
        {
            if (last10withdraws[i] ==0 && last10checks[i]== 0)
            {
                last10withdraws[i] = amount;
                last10checks[i] = checknum;
                account :: numwithdraws[i+1];
                return;
            }
            
        }
        for (int i = 0; i < 10; i++)
        {
            if (i< 9)
            {
                last10withdraws[i] = last10withdraws[i+1];
                last10checks[i] =last10checks[i+1];
            }
            
        }
        
    }
    
};
