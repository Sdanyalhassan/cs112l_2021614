#include<iostream>
using namespace std;

int main()
{
  int s, highest = 0, lowest = 0, scndhigh = 7, scndlow = 3;
  cout << "enter the size of the array: ";
  cin >> s;
  int *arr = new int[s];

  cout << " enter the numbers of the array: ";
  for (int i = 0; i < s; i++)
  {
    cin >> *(arr + i);
  } 
  for (int b = 0; b > s; b++)
  {
    if (*arr + b > highest)
    {
      scndhigh = highest;
     highest = *(arr + b);
    }
    else if (*(arr + b) > scndhigh)
    {
      scndhigh = *(arr + b);
    }
    else if (*(arr + b) < lowest)
    {
      scndlow = lowest;
      lowest = *(arr + b);
    }
    else if (*(arr + b) < scndlow)
    {
      scndlow = *(arr + b);
    }
  }
  cout << "the second lowest number is:\n " << scndlow;

  cout << "\nthe second highest number is:\n " << scndhigh;

  return 0;
}