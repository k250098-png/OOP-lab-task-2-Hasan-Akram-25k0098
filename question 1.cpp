#include <iostream>
using namespace std;

class boardmarker {
private:
    string company;
    string color;
    bool refillable;
    bool inkempty;

public:
    
    void setcompany(string c) {
        company = c;
    }

    void setcolor(string c) {
        color = c;
    }

    void setrefillable(bool r) {
        refillable = r;
    }

    void setinkempty(bool i) {
        inkempty = i;
    }

   
    string getcompany() {
        return company;
    }

    string getcolor() {
        return color;
    }

    bool isrefillable() {
        return refillable;
    }

    bool isinkempty() {
        return inkempty;
    }

    
    void write() {
        if (inkempty == true) {
            cout << "cannot write. ink is empty." << endl;
        } else {
            cout << "writing with the marker..." << endl;
        }
    }


    void refill() {
        if (refillable == true) {
            inkempty = false;
            cout << "marker refilled successfully." << endl;
        } else {
            cout << "this marker cannot be refilled." << endl;
        }
    }
};

int main() {
    
    boardmarker m1;
    m1.setcompany("dollar");
    
    m1.setcolor("black");
    m1.setrefillable(true);
    m1.setinkempty(true);

    cout << "marker 1:" << endl;
    m1.write();
    m1.refill();
    m1.write();

    cout << endl;

    boardmarker m2;
    m2.setcompany("dollar");
    m2.setcolor("red");
    
    m2.setrefillable(false);
    m2.setinkempty(true);

    cout << "marker 2:" << endl;
    m2.write();
    m2.refill();

    cout << endl;

    boardmarker m3;
    m3.setcompany("piano");
    m3.setcolor("blue");
    
    m3.setrefillable(true);
    m3.setinkempty(false);

    cout << "marker 3:" << endl;
    m3.write();

    return 0;
}
