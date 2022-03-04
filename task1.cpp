#include<iostream>
using namespace std;

int main()
{
  int size;
  int *array = new int[size];
  cout << "enter the size of the array: ";
  cin >> size;

  cout << "enter the numbers: ";
  for (int x = 0; x < size; x++)
  {
  cin >> array[x];
  }
  int *result = new int[size - 1];
  for (int b = 0; b < size; b++)
  {
    *(result + b) = *(array + b + 1) - *(array + b);

  }
  for (int c = 0; c < size - 1; c++)
  {
    cout << *(result + c);
  }

   return 0;
}