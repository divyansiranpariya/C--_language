#include <iostream>
#include <cmath>
using namespace std;


double circle(double radius) {
    return 3.14* radius * radius;
}


double perimeter(double radius) {
    return 2 * 3.14 * radius;
}

double square(double s) {
    return s* s;
}

double rectangle(double length, double width) {
    return length * width;
}


double triangle(double base, double height) {
    return  (base * height)/2;
}


double volumeofSphere(double radius) {
    return (4 / 3) * 3.14* pow(radius, 3);
}

int main() 
{
    double radius, s, length, width, base, height;

    
    cout << "enter the radius of the circle: ";
    cin >> radius;
    
    cout << "area of the circle: " << circle(radius) << endl;
    cout << "perimeter of the circle: " << perimeter(radius) << endl;

  
    cout << "enter length of the square: ";
    cin >> s;
  cout << "area of the square: " << square(s) << endl;

   
    cout << "enter the length and width: ";
    cin >> length >> width;
    cout << "area of the rectangle: " << rectangle(length, width) << endl;

   
    cout << "enter the base and height: ";
    cin >> base >> height;
    cout << "area of the triangle: " << triangle(base, height) << endl;


    cout << "enter the radius of the sphere: ";
    cin >> radius;
    cout << "Volume of the sphere: " << volumeofSphere(radius) << endl;

    return 0;
}

