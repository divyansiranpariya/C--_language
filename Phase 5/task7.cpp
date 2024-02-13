#include <iostream>
using namespace std;

void fibona(int a){
	
  int x=0,y=1,z,i,n;
	 cout<<x;
	 cout<<y;

	 for(i=1;i<=a;i++){
	 	z=x+y;
	 	printf("%d  ",z);
	 	x=y;
	 	y=z;
	 }
}

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    
    fibona(n);
    
    return 0;
}

