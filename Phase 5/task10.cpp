#include <iostream>
using namespace std;

void arm(int n)
{

int sum=0,r,d;

	d=n;
	while(n>0){
		r=n%10;
		sum=(r*r*r)+sum;
		n=n/10;
	}
cout<<endl;
	if(d==sum){
		cout<<"this is armstrong number";
	}
	else{
	cout<<"this is not armstrong number";
}
}



int main() 
{
    int n1;
    cout << "Enter a number: ";
    cin >> n1;

    arm(n1);

    return 0;
}

