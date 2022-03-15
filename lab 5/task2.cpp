#include <iostream>
using namespace std;

class parity
{

public:

  int size;
	int x;

	int *arr = new int[x + size];


	parity() {
		x = 0;
		size = 0;
	}



	void put() 
  {

		cout << "Enter the Number of values you want to input: ";
		cin >> size;

		cout << "Enter Values: ";
		for (int i = x; i < x + size; i++) 
    {
			cin >> *(arr + i);
		}

		x = x + size;
		size = 0;



	}
	void display() {

		cout << " your array is: { ";
		for (int i = 0; i < x + size; i++) {
			cout << *(arr + i) << " ";
		}
		cout << " }";
	}

	void Delete() {
		x = x - 1;
		cout << "The last element has been deleted!!!" << endl;
	}

	int test() 
  {

  	if (x % 2 == 0) {

			return 1;
		}
		else

			return 0;

	}

};

int main() 
{
	parity y;
	do {

		cout << "-----main menu-----" << endl << endl;
		cout << "1. Enter Values" << endl;
		cout << "2. Print Values" << endl;
		cout << "3. Delete Values" << endl;
		cout << "4. Test for even or odd" << endl;

		char x;
		cin >> x;

		switch (x) 
    {
		case '1':
			y.put();
			break;

		case '2':
			y.display();
			break;

		case '3':
			y.Delete();
			break;

		case '4':
    
    int x = y.test();

			if (x == 1)
      {
				cout << "EVEN" << endl;
			}
			else 
      {

				cout << "ODD" << endl;
			}

			break;
		}
	} while (1);

  
}