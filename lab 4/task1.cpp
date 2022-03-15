#include<iostream>

using namespace std;

class swaps
{

int a, b;

public:

void setter();
void swap();
void display();

};

void swaps::setter()
{

cout << "Enter two numbers: ";
cin >> a >> b;

}

void swaps::swap()
{
a = a + b;
b = a - b;
a = a - b;
}

void swaps::display()
{
cout << " a = " << a << " \t b = " << b;
}

int main()
{

swaps s1;

s1.setter();
cout << " \n Before swap: \n";
s1.display();

s1.swap();
cout << " \n After swap: \n";
s1.display();

return 0;
}