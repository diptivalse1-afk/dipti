#include <iostream>
using namespace std;
int main()
{
  int book[5];
int searchID;

cout << "Enter 5 Books IDs:\n";
for (int i = 0;i < 5;i++)
{
cin >> book[i];
}

cout << "\n Enter book ID to search : ";
cin >> searchID;

for (int i = 0 ; i < 5; i++)
{
if (book[i] == searchID)
{
cout << "Book found " ;
return 0;
}
}
cout << "Book not found ";
retrun 0;
}
