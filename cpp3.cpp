#include <iostream>
using namespace std;

int main() {
    string name;
    float amount = 0, finalTotal = 0;
    char more;

    cout << "=== Simple Billing App ===\n";

    do {
        // Ask for name
        cout << "\nEnter name: ";
        cin >> name;

        // Ask for amount
        cout << "Enter total amount: ";
        cin >> amount;

        // Add to final total
        finalTotal += amount;

        // Ask if user wants to continue
        cout << "Do you want to add more? (y/n): ";
        cin >> more;

    } while (more == 'y' || more == 'Y');

    // Final output
    cout << "\n--------------------------";
    cout << "\nFinal Bill Amount: " << finalTotal;
    cout << "\nThank you! ??";
    cout << "\n--------------------------";

    return 0;
}
