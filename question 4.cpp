#include <iostream>
using namespace std;

class StationeryShop
{
private:
    string items[50];
    double prices[50];
    int count;

public:
    // Constructor
    StationeryShop()
    {
        count = 0;
    }

    // ==========================
    // Setters (modify private data)
    // ==========================
    void set_item(int index, string name)
    {
        if (index >= 0 && index < 50)
            items[index] = name;
    }

    void set_price(int index, double price)
    {
        if (index >= 0 && index < 50)
            prices[index] = price;
    }

    void set_count(int c)
    {
        count = c;
    }

    // ==========================
    // Getters (access private data)
    // ==========================
    string get_item(int index)
    {
        if (index >= 0 && index < count)
            return items[index];
        else
            return "";
    }

    double get_price(int index)
    {
        if (index >= 0 && index < count)
            return prices[index];
        else
            return 0;
    }

    int get_count()
    {
        return count;
    }

    // ==========================
    // Functions for menu actions
    // ==========================
    void add_item()
    {
        if (count >= 50)
        {
            cout << "Shop is full, cannot add more items.\n";
            return;
        }

        string name;
        double price;

        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter item price: ";
        cin >> price;

        set_item(count, name);
        set_price(count, price);
        count++;

        cout << "Item added successfully!\n";
    }

    void view_items()
    {
        if (count == 0)
        {
            cout << "No items available.\n";
            return;
        }

        cout << "\nItems List:\n";
        for (int i = 0; i < count; i++)
        {
            cout << i + 1 << ". " << get_item(i) << endl;
        }
    }

    void edit_price()
    {
        int choice;
        view_items();

        cout << "Select item number to edit price: ";
        cin >> choice;

        if (choice < 1 || choice > count)
        {
            cout << "Invalid selection!\n";
            return;
        }

        double new_price;
        cout << "Enter new price: ";
        cin >> new_price;

        set_price(choice - 1, new_price);
        cout << "Price updated successfully!\n";
    }

    void view_all()
    {
        if (count == 0)
        {
            cout << "No items available.\n";
            return;
        }

        cout << "\nItems with Prices:\n";
        for (int i = 0; i < count; i++)
        {
            cout << get_item(i) << " - Rs. " << get_price(i) << endl;
        }
    }

    void generate_receipt()
    {
        int item_no, qty;
        double total = 0;
        char more;

        cout << "\n--- Receipt ---\n";

        do
        {
            view_all();
            cout << "Enter item number: ";
            cin >> item_no;

            cout << "Enter quantity: ";
            cin >> qty;

            if (item_no >= 1 && item_no <= count)
            {
                double cost = get_price(item_no - 1) * qty;
                total += cost;

                cout << get_item(item_no - 1) << " x " << qty
                     << " = Rs. " << cost << endl;
            }
            else
            {
                cout << "Invalid item number!\n";
            }

            cout << "Add more items? (y/n): ";
            cin >> more;

        } while (more == 'y' || more == 'Y');

        cout << "\nTotal Bill: Rs. " << total << endl;
        cout << "--- Thank You ---\n";
    }
};

int main()
{
    StationeryShop shop;
    int choice;

    do
    {
        cout << "\n--- Stationery Shop Menu ---\n";
        cout << "1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Edit Item Price\n";
        cout << "4. View All Items with Prices\n";
        cout << "5. Generate Receipt\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            shop.add_item();
            break;
        case 2:
            shop.view_items();
            break;
        case 3:
            shop.edit_price();
            break;
        case 4:
            shop.view_all();
            break;
        case 5:
            shop.generate_receipt();
            break;
        case 6:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
