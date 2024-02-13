#include<iostream>
#include<cmath>
using namespace std;

class triangle 
{
private:
    float a, b, c;

public:
    triangle(float s1, float s2, float s3) {
        a = s1;
        b = s2;
        c = s3;
    }

    string type() {
        float sides[3] = {a, b, c};
        if (pow(sides[0], 2) + pow(sides[1], 2) > pow(sides[2], 2))
            return "Acute";
        else if (pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2))
            return "Right";
        else
            return "Obtuse";
    }
};

int main()
 {
    float side1, side2, side3;

    cout << "enter the length of first side of triangle: ";
    cin >> side1;

    cout << "enter the length of second side of triangle: ";
    cin >> side2;

    cout << "enter the length of third side of triangle: ";
    cin >> side3;
cout<<endl<<endl;
    triangle t(side1, side2, side3);

    string type = t.type();

    cout << "The triangle is " << type << endl;

    return 0;
}

