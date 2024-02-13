#include <iostream>
using namespace std;

int arm(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
		{
			cout<<"indian army have largest army strengthm is:"<<x;	
		}	
		else
		{
			cout<<"chines army have largest army strength is:"<<z;	
		}
	}    
	else if(y>z)
	{
		cout<<"us army have largest army strength is:"<<y;	
	}
	else
	{
		cout<<"chines army have largest army strength is:"<<z;	
	}
    
}

int main() {
    int india,us, chin;

    cout << "enter the number of indian soldier:";
    cin >> india;
	cout << "enter the number of us soldier:";
    cin >> us;
    cout << "enter the number of chin soldier:";
    cin >> chin;
    cout<<endl<<endl;
    arm(india, us, chin);
    return 0;
}

