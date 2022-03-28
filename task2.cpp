#include <iostream>
#include <string>

using namespace std;

class Officer{
    int ID;
    string name, rank;
    static int n;

    public:
        bool NewOfficer(){
            cout << "Enter name of the officer: "; 
            getline(cin, name);

            cout << "Enter rank of the officer: "; 
            getline(cin, rank);

            cout << "Enter rank of the officer: "; 
            cin >> ID;
            if(!palindromeCheck(ID)){
                n++;
                cout << "The officer is allowed to enter!\n";
                return 1;
            } else {
                cout << "The officer isnt allowed :(\n";
                return 0;
            }
        }

        bool palindromeCheck(int ID){
            string strID = to_string(ID);
            for(int i = 0; i < strID.length()/2; i++){
                if(strID[i] != strID[strID.length() - 1-i])
                    return 0;
            }
            return 1;
        }

        static int returnCount(){
            return n;
        }
};

int Officer::n = 0;
// DECLARING THE STATIC VAR

int menu(){
    int selector = 1;
    int ascii;
    char input;
    while(1){
        system("CLS");
        cout << "Select desired option: \n1.Enter New officer\n2.Get total number of officers\n3.Exit";
        cout << endl << endl << selector;
        ascii = input;
        if(ascii == 80 && selector < 3){
            selector++;
        } else if(ascii == 72 && selector > 1){
            selector--;
        } else if(ascii == 13){
            return selector;
        }
    }
}

int main(){
    Officer *Officers;
    while(1){
        int option = menu();
        if(option == 1){
            int n = Officer::returnCount();
            // ADDITION TO DYNAMIC ARRAY
            Officer newOfficer;
            if(newOfficer.NewOfficer()){
                Officer *temp = new Officer[n+1];
                for(int i = 0; i < n; i++){
                    temp[i] = Officers[i];
                }
                temp[n] = newOfficer;
                delete [] Officers;
                Officers = temp;
                delete [] temp;
            }
            system("PAUSE");
        } else if(option == 2){
            cout << "The number of officers in the system are: " << Officer::returnCount() << endl; 
            system("PAUSE");
        } else {
            break;
        }
    }

    return 0;
}