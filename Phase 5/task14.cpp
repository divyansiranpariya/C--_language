#include <iostream>
using namespace std;

window(int l, int w)
 {
    int length = 10,width = 4;
	int totallength,totalwidth;
    
    totallength = length + 4;
    totalwidth = width + 4;
    
    if(l>=totallength && w>=totalwidth)
	{
        cout<<"curtains satisfies mentioned criteria ";
    }
	else
	{
        cout << "curtains not satisfies mentioned criteria ";
    }
    return 0;
}

int main() {
    int len, wid;
    cout << "enter length: ";
    cin >> len;
    cout << "enter width: ";
    cin >> wid;
    
    window(len, wid);
    return 0;
}

