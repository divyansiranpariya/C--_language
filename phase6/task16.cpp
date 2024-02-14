#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
    double volume;

public:
   
    Box(double l, double w, double h) 
	 {
	 	
	 	this->length=l;
	 	this->width=w;
	 	this->height=h;
        volume = length * width * height;
    }

    bool Even(double num) 
	{
        return ((int)num % 2 == 0);
    }

    void display()
	 {
        cout << "Volume of the box: " << volume << endl;
        if (Even(volume)) {
            cout << "The volume is even." << endl;
        } else {
            cout << "The volume is odd." << endl;
        }
    }
};

int main() {
    double length, width, height;

    cout << "Enter the length of the box: ";
    cin >> length;

    cout << "Enter the width of the box: ";
    cin >> width;

    cout << "Enter the height of the box: ";
    cin >> height;

    
    Box box(length, width, height);

    
    box.display();

    return 0;
}

