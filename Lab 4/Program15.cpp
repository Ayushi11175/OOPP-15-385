#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

// Function to display all items
void displayCart(const vector<Item>& cart)
{
    cout << "\n------------- SHOPPING CART -------------\n";
    cout << left << setw(20) << "Item"
         << setw(10) << "Quantity"
         << setw(12) << "Price"
         << setw(15) << "Amount" << endl;

    cout << "------------------------------------------\n";

    for (auto item : cart)
    {
        cout << left << setw(20) << item.name
             << setw(10) << item.quantity
             << setw(12) << fixed << setprecision(2) << item.price
             << setw(15) << item.quantity * item.price << endl;
    }

    cout << "------------------------------------------\n";
}

// Function to calculate total
double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (auto item : cart)
    {
        total += item.quantity * item.price;
    }

    return total;
}

// Function to find item with highest unit price
Item findMostExpensiveItem(const vector<Item>& cart)
{
    Item expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
        {
            expensive = item;
        }
    }

    return expensive;
}

// Function to apply 10% discount
void applyDiscount(vector<Item>& cart)
{
    for (auto& item : cart)
    {
        if (item.price > 1000)
        {
            item.price = item.price * 0.90;
        }
    }
}

int main()
{
    vector<Item> cart =
    {
        {"Laptop", 1, 55000},
        {"Mouse", 2, 800},
        {"Headphones", 1, 2500},
        {"Keyboard", 1, 1500},
        {"USB Cable", 3, 400}
    };

    // 1. Display all items
    displayCart(cart);

    // 2. Calculate and display total
    double total = calculateTotal(cart);
    cout << "\nTotal Amount Payable: Rs. "
         << fixed << setprecision(2) << total << endl;

    // 3. Find and display most expensive item
    Item expensive = findMostExpensiveItem(cart);

    cout << "\nMost Expensive Item:\n";
    cout << "Name  : " << expensive.name << endl;
    cout << "Price : Rs. " << fixed << setprecision(2)
         << expensive.price << endl;

    // 4. Apply discount
    applyDiscount(cart);

    cout << "\n10% discount applied on items with price > Rs.1000.\n";

    // 5. Calculate updated total
    double updatedTotal = calculateTotal(cart);

    cout << "\nUpdated Cart:\n";
    displayCart(cart);

    cout << "\nUpdated Cart Total: Rs. "
         << fixed << setprecision(2) << updatedTotal << endl;

    return 0;
}