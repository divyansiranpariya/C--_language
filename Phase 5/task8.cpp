#include <iostream>
using namespace std;

 void time(int s)
 {
	int hour,sec,minute;
	
    hour=s/3600;
    minute=(s%3600)/60;
    sec=s%60;

	cout<<""<<hour<<":"<<minute<<":"<<sec<<endl;
}

void second(int hours,int minutes,int seconds)
{
    int talsec;
    
    talsec = (hours*3600)+ (minutes*60)+seconds;
    
    cout<<"total time in seconds is = "<<talsec<<endl;
}

int main()
 {
    int ch;
     int sec;
     int hr,minit,secd;
do
     {
        
        cout<<"press 1 for convert seconds to HH:MM:SS"<<endl;
        cout<<"press 2 for convert time in total seconds"<<endl;
        cout<<"press 3 for exit"<<endl;
        cout<<endl<<endl;
        cout<<"enter your choice: ";
        cin>>ch;
        cout<<endl<<endl;
        switch(ch)
		{
            case 1:
               
                cout<<"enter seconds: ";
                cin>>sec;
                
                time(sec);
                
               break;
               
            case 2:
            	
                
                cout<<"enter hours:";
                cin>>hr;
                cout<<"enter minites:";
                cin>>minit;
                cout<<"enter seconds:";
                cin>>secd;
                
                second(hr,minit,secd);
                
                break;
            
            case 3:
                cout<<"exiting";
				break;
		
                
            default:
                cout<<"invalid choice"<<endl;
		}
        
    } while(ch!=3);

    return 0;
}

