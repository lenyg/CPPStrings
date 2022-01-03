#include <iostream>
#include <string>
using namespace std;

int main(){
string first, last, name;

cout << "What is your first name? ";
cin >> first;
cout << "What is your last name? ";
cin >> last;
cout << "What is your middle initial? ";
string middle;
cin >> middle;
name = first + " " + last;
cout << "\n\nName: " << name << endl;
cout << "Length: " << name.length() << endl;
int m = name.find(" ");
name.insert(m+1, " ");
cout << "Name: " << name.insert(m + 1, middle) << endl;
int l = name.rfind(" ");
cout << "Initials: " << name[0] << "." << name[m + 1] << "." << name[l + 1] << ".";


  return 0;
}
