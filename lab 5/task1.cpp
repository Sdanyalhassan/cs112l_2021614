#include<iostream>
using namespace std;

class Heater 
{
private :

  int temperature;

public : 

   Heater()
  {
    temperature = 15;
  }

  void warmer()
  {
   temperature += 5;
  }

  void cooler()
  {
   temperature -= 5;
  }

  void print()
  {
   cout << "\n The temperature is: " << temperature << "\n";
  }

  ~Heater()
  {
    delete & temperature;
  }
  
};

int main()
{
  int num;
  Heater temp;

do
{
  cout << "\n Menu" << endl
       << " 1-show temperature \n"
       << " 2-increase temperature \n"
       << " 3-decrease temperature \n"
       << " 4-exit \n";

  cin >> num;

  switch (num)
  {
    case 1:
    temp.print();
    break;

    case 2:
    temp.warmer();
    break;

    case 3:
    temp.cooler();
    break;

    case 4:
    cout << "program terminated";
    break;

    default:
    cout << " invalid input\n";
    break;
  }
  
}
while(num != 0);

  return 0;
}