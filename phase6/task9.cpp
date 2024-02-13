#include <iostream>

using namespace std;

class GST
 {
private:
	
    double amount;
    double rate;

public:
	
	
   GST(double amount,double rate)
    {
    	this->amount=amount;
    	this->rate=rate;
	}
	
    double calculateGST() {
        return (amount*rate)/100;
    }


    /*double getAmount()
	{
        return amount;
    }

    double getRate() 
	{
        return rate;
    }*/
};

int main() {
    double amount;
    int category;

    cout<<"Enter the amount:";
    cin>>amount;

   
    cout << "Select GST Category:" << endl;
    cout << "press 1 for 5%" << endl;
    cout << "press 2. for 12%" << endl;
    cout << "press 3. for 18%" << endl;
    cout << "press 4. for28%" << endl;
    
    cout << "Enter your choice: ";
    cin >> category;

    double gstrate;
    switch (category) {
        case 1:
            gstrate = 5;
            break;
        case 2:
            gstrate = 12;
            break;
        case 3:
            gstrate = 18;
            break;
        case 4:
            gstrate = 28;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    GST gst_calculator(amount,gstrate);  //objet

    double GST = gst_calculator.calculateGST();


        
    cout << "Total tax (GST): Rs. " << GST << endl;

    return 0;
}

