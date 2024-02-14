#include <iostream>
using namespace std;

class House {
public:
    void hou() {
        cout << "This is HOUSE" << endl;
    }
};

class Kitchen : public House {
public:
    void kich() {
        cout << "This is KITCHEN" << endl;
    }
};

class DiningTable : public Kitchen {
public:
    void dt() {
        cout << "This is DINING TABLE" << endl;
    }
};

class Bedroom : public House {
public:
    void bd() {
        cout << "This is BEDROOM" << endl;
    }
};

class Bathroom : public Bedroom {
public:
    void br() {
        cout << "This is BATHROOM" << endl;
    }
};

class Backyard : public House {
public:
    void bk() {
        cout << "This is BACKYARD" << endl;
    }
};

class Garage : public Backyard {
public:
    void gr() {
        cout << "This is GARAGE" << endl;
    }
};

int main() {
    Garage g;
    g.hou();
    g.bk();
    g.gr();

    return 0;
}

