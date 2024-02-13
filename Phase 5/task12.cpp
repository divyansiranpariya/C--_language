#include <iostream>
using namespace std;

velocity(int distance, int time) {
	
    return distance / time;
}

int main() 
{
    int dist=1933;
	int b1=40,b2=46;
	int v1,v2;

	v1=velocity(dist, b1);

	v2=velocity(dist,b2);

   
    cout<<"velocity of bus 1 is:" << v1<< endl;
    cout<<"velocity of bus 2 is:" << v2<<endl;

    return 0;
}

