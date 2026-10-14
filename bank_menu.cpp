
#include <iostream>
using namespace std;

int main() {
    int tokens[100];
    int front = 0, rear = -1;
    int choice, tokenNo = 1;

    do {
        cout << "\n--- BANK TOKEN SYSTEM ---\n";
        cout << "1. Issue Token\n";
        cout << "2. Display All Tokens\n";
        cout << "3. Serve Customer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (rear == 99) {
                    cout << "Token list is full!\n";
                } else {
                    tokens[++rear] = tokenNo++;
                    cout << "Token issued successfully: "
                         << tokens[rear] << endl;
                }
                break;

            case 2:
                if (front > rear) {
                    cout << "No tokens waiting.\n";
                } else {
                    cout << "Tokens waiting: ";
                    for (int i = front; i <= rear; i++) {
                        cout << tokens[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (front > rear) {
                    cout << "No customer to serve.\n";
                } else {
                    cout << "Serving customer with Token No: "
                         << tokens[front] << endl;
                    front++;
                }
                break;

            case 4:
                cout << "Exiting Bank Token System.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
