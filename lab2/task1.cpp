#include<iostream>
using namespace std;

int checkPowerOf2( int num)
{
    if ((num & (num - 1)) != 0)
        return 0;
    return 1;
}

int main()
{
     int num = 0;

    cout << "Enter Number: ";
    cin >> num;

    if (checkPowerOf2(num))
        cout << "Given number is power of 2.\n";
    else
        cout << "Given number is not power of 2.\n";

    return 0;
}