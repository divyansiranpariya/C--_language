#include <iostream>
#include <iomanip>
using namespace std;


void convert(int hour, int minute) 
{
    string p;
    
    
    if (hour < 12)
	 {
        p= "AM";
        if (hour == 0)
		 {
            hour = 12; 
        }
    } 
	else 
	{
        p = "PM";
        if (hour != 12) 
		{
            hour -= 12; 
        }
    }
    

    cout << "Converted time: " << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << p<< endl;
}

int main() 
{
    int hr, min;
    
   
    cout << "enter the hours 0 to 23: ";
    cin >> hr;
    
    cout << "enter the minutes 0 to 59: ";
    cin >> min;
    

    if (hr < 0 || hr> 23 || min < 0 || min > 59)
	 {
        cout << "invalid input" << endl;
        return 1;
    }
    

    convert(hr, min);
    
    return 0;
}

