#include <iostream>
using namespace std;

class circle {
private:
    double radius;
    double pi;

public:

    void setradius(double r) {
        radius = r;
        
        pi = 3.14159;
    }

    
    double getradius() {
        return radius;
    }

    double getarea() {
        return pi * radius * radius;
    }

    double getdiameter() {
        return radius * 2;
    }

    double getcircumference() {
        return 2 * pi * radius;
    }
};

int main() {
    circle c;
    double r;

    cout << "enter radius: ";
    
    cin >> r;

    c.setradius(r);

    cout << "radius: " << c.getradius() << endl;
    cout << "area: " << c.getarea() << endl;
    cout << "diameter: " << c.getdiameter() << endl;
    
    cout << "circumference: " << c.getcircumference() << endl;

    return 0;
}
