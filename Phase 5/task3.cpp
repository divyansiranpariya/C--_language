#include <iostream>
using namespace std;

coin(int x, int y) {
	int z;
	
    z = x;
    x = y;
    y= z;
    
    cout<<"after 5 minites in bowl1=> "<<x<<endl;
    cout<<"after 5 minites in bowl2=> "<<y<<endl;
    
    return 0;
}

int main() {
    int bowl1=1,bowl2=2; 

    cout<<"one coin in bowl1=>"<<bowl1<<endl;
    cout<<"Two coin in bowl2=>"<<bowl2<<endl;
    
    coin(bowl1,bowl2);

    return 0;
}

