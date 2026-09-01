#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int bookIDs[SIZE];
    int temp;

    cout << "Enter 5 library book IDs:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Book ID " << (i + 1) << ": ";
        cin >> bookIDs[i];
    }

    cout << "\nOriginal Book IDs: ";
    for (int i = 0; i < SIZE; i++) {
        cout << bookIDs[i] << " ";
    }

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (bookIDs[i] > bookIDs[j]) {
                
                temp = bookIDs[i];
                bookIDs[i] = bookIDs[j];
                bookIDs[j] = temp;
            }
        }
    }

    
    cout << "\n\nBook IDs in Ascending Order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << bookIDs[i] << " ";
    }
    cout << endl;

    return 0;
}



