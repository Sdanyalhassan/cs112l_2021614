#include<iostream>
#include<bitset>
#include<cmath>
#include<string>

using namespace std;

#define read(type, var) type var; cin >> var;

int bin_to_dec(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}


int main()
{
  cout<<"Enter base system: ";
    read(int,p);
    cout<<"Enter the first number: ";
    read(string,n1);
    cout<<"Enter the second number: ";
    read(string,n2);
    switch(p){
  
        case 10:{
        int num1=stoi(n1);
        int num2=stoi(n2);
        int result= num1 + num2;
        cout<<"The answer is "<< result;
        break;}
        
        case 16:
        break;
        default:
        cout<<"Invalid base!";
    }





  return 0;
}


