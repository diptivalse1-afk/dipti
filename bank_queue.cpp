#include<iostream>
#include<queue>

using namespace std;

int main () {
    queue<int>q;
    int token;
    
    cout << "Enter 5 customer toekn numbers :";
    for(i = 0; i < 5;i++){
        cin >> token;
        q.push(token);
        }
        
    cout << "Serving customer in order :";
    while(!q.empty()) {
        cout << "Serving customer with token number :"<<q.front()<< endl;
        q.pop();
        }
 return 0;
 }
