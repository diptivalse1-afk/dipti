#include<iostream>
#include<queue>

using namespace std;
int main() {
queue<int> orderQueue;

cout << "Enter 5 customer order numbers : " << endl;
for (int i = 0; i < 5; i++) {
    int orderNum;
    cout<< "Order :" <<(i+1)<<":";
    cin>> orderNum;
    orderQueue.push(orderNum);
  }
  
  cout<<"\nProcessing customer ordrs :"<<endl;
  while (!orderQueue.empty()){
      cout<<"Processing order number :"<<orderQueue.front()<<endl;
      orderQueue.pop();
      }
      
     cout<< "All orders have been processed successfully!:"<<endl;
     
     return 0;
     }
