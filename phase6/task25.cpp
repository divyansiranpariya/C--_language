#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    
    Shape(double w, double h)  
	{
		this->width=w;
		this->height=h;
	}

   
    virtual double area() = 0;
};

class Triangle : public Shape 
{
public:
    
    double area()  
	{
        return width * height/2;
    }
};


class Rectangle : public Shape
 {
public:
  
    double area() 
	{
        return width * height;
    }
};

int main() {
   
    Triangle t(5, 4);
    Rectangle r(7, 3);


    cout << "Area of Triangle: " << t.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}

