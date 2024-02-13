#include <iostream>
using namespace std;

int rev(int num)
 {
	int x,y;
	
    x = num;
                                                  
    while(x>0){
        y=x%10;
        cout<<y;  
        x=x/10;
    }
    
}

int main() {
    int n;
    cout << "Enter a number:";
    cin >> n;
    
    rev(n);
    return 0;
}

