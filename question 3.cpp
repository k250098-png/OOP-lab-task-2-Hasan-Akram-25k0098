#include <iostream>
using namespace std;

class waterbottle {
public:
    string company;
    string color;
    int capacity_ml;
    double capacity_l;

    void setdata(string c, string col, int ml) {
        company = c;
        color = col;
        capacity_ml = ml;
        capacity_l = ml / 1000.0;
    }

    void drinkwater() {
        int drank_ml;
        cout << "enter water drank (ml): ";
        cin >> drank_ml;

        capacity_ml = capacity_ml - drank_ml;
        capacity_l = capacity_ml / 1000.0;
    }

    void showdata() {
        cout << "company: " << company << endl;
        cout << "color: " << color << endl;
        cout << "water: " << capacity_l << " liters (" 
             << capacity_ml << " ml)" << endl;
    }
};

int main() {
    waterbottle wb;

    wb.setdata("nestle", "blue", 1000);

    wb.showdata();

    wb.drinkwater();

    cout << "after drinking water:" << endl;
    wb.showdata();

    return 0;
}
