#include <iostream>
#include <string>
using namespace std;
class savings : public account {
  void savings :: DoWithdraw( double amount ){
      set_balance(get_balance()-amount); 
        for (int i = 0; i < 10; i++)
        {
            if (last10withdraws[i] ==0)
            {
                last10withdraws[i] = amount;
                account :: numwithdraws[i+1];
                return;
            }
            
        }
        for (int i = 0; i < 10; i++)
        {
            if (i< 9)
            {
                last10withdraws[i] = last10withdraws[i+1];
                
            }
            
        }
        
    }
    
};
    
};

