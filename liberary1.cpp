#include<iostream>
#include<string>

using namespace std ;
int main(){
  int id1,id2,id3;
string title1,title2,title3;

cout<<"Enter book 1 ID :";
cin>>id1;
cin.ignore();
cout<<"Enter ur book title name:";
getline(cin,title1);

cout<<"Enter book 2 ID :";
cin>>id2;
cin.ignore();
cout<<"Enter ur book title name:";
getline(cin,title2);


cout<<"Enter book 3 ID :";
cin>>id3;
cin.ignore();
cout<<"Enter ur book title name:";
getline(cin,title3);


cout<<"\n========LIBRARY BOOKS=======";
cout<<"\nBook ID :"<<id1;
cout<<"\nBook TITLE :"<<title1;
cout<<"\nBook ID :"<<id2;
cout<<"\nBook TITLE :"<<title2;
cout<<"\nBook ID :"<<id3;
cout<<"\nBook TITLE :"<<title3;

return 0;
}










