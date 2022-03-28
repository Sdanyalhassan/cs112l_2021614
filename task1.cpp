#include <iostream>
#include <string>
using namespace std;

class Person
{
    string comp_uni;
    string comp, uni;

    friend class Coordinator;
    public:
        Person(){
            cout << "Enter competition and University name: ";
            getline  (cin, comp_uni);
            tokenize(comp_uni, comp, uni);
        }

        void tokenize  (string comp_uni,  string &comp,  string &uni);
        {
            comp = "";
            uni = "";
            int i;
            for(i = 0; i < comp_uni.length(); i++){
                if(comp_uni[i] != ' ')
                    comp += comp_uni[i];
                else
                    break;
            }
            for(i++; i < comp_uni.length(); i++){
                uni += comp_uni[i];
            }

        }
};

class Coordinator{
    Person p1, p2;

    public:
        void checkRoommate(){
            if(p1.uni == p2.uni){
                cout << "P1 and P2 are roommates, room number is " 
                    << (p1.comp.length() > p2.comp.length() ? p1.comp.length() : p2.comp.length());
            } else {
                cout << "p1 and p2 are not room mates :(";
            } 
        }

};

int main()
{
    Coordinator c;
    c.checkRoommate();
    return 0;
}