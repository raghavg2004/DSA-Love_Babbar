#include <iostream>
using namespace std;

int main() {
    int amount, notes500, notes200, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    // Initialize all note counters to 0
    notes500 = notes200 = notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = notes1 = 0;

    cout << "Enter the amount: ";
    cin >> amount;

    switch (1) {
        case 1:
            if (amount >= 500) {
                notes500 = amount / 500;
                amount %= 500;
            }
        case 2:
            if (amount >= 200) {
                notes200 = amount / 200;
                amount %= 200;
            }
        case 3:
            if (amount >= 100) {
                notes100 = amount / 100;
                amount %= 100;
            }
        case 4:
            if (amount >= 50) {
                notes50 = amount / 50;
                amount %= 50;
            }
        case 5:
            if (amount >= 20) {
                notes20 = amount / 20;
                amount %= 20;
            }
        case 6:
            if (amount >= 10) {
                notes10 = amount / 10;
                amount %= 10;
            }
        case 7:
            if (amount >= 5) {
                notes5 = amount / 5;
                amount %= 5;
            }
        case 8:
            if (amount >= 2) {
                notes2 = amount / 2;
                amount %= 2;
            }
        case 9:
            if (amount >= 1) {
                notes1 = amount;
            }
    }

    // Output the number of each note
    cout << "Total number of notes: " << endl;
    cout << "500 notes: " << notes500 << endl;
    cout << "200 notes: " << notes200 << endl;
    cout << "100 notes: " << notes100 << endl;
    cout << "50 notes: " << notes50 << endl;
    cout << "20 notes: " << notes20 << endl;
    cout << "10 notes: " << notes10 << endl;
    cout << "5 notes: " << notes5 << endl;
    cout << "2 notes: " << notes2 << endl;
    cout << "1 notes: " << notes1 << endl;

    return 0;
}
