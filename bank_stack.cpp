
#include <iostream>
#include <string>
using namespace std;

int main() {
    string customers[5];
    int top = -1;

    cout << "Enter names of 5 customers:\n";

    for (int i = 0; i < 5; i++) {
        top++;
        cout << "Customer " << i + 1 << ": ";
        cin >> customers[top];
    }

    cout << "\nCustomer Service History (Most Recent First):\n";

    for (int i = top; i >= 0; i--) {
        cout << customers[i] << endl;
    }

    return 0;
}
