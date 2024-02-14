#include <iostream>
using namespace std;

class RBI {
public:
    virtual void roi() 
	{
        cout << "RBI predefined Rate of Interest." << endl;
    }
};


class PrivateBank : public RBI {
public:
    void roi() {
        cout << "private bank different roi."<<endl;
};

int main() {
    RBI* rbi = new RBI();
    rbi->roi(); 
    PrivateBank* privateBank = new PrivateBank();
    privateBank->roi(); 

    delete rbi;
    delete privateBank;
	
	  return 0;
}

