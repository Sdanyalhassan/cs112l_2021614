#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int Id;
    string BookName;
    string author;
    string ISBN;
    int price;
    int pages;
};

struct bookList
{
    Book books[5];
};

struct student
{
    int ID;
    string stdName;
    int rollNo;
};

struct studentList
{
    student std[5];
};

void print_book_details (Book);

void print_booklist (bookList);

void addBook (bookList); 

void sort (bookList);   

void deleteAll (bookList); 

void print_student_details (student);

void print_studentlist (studentList);

void addstudent (studentList);     

void delete_student (studentList); 


void menu();

int main()
{
    int option, book_id, std_id;
    bookList blist;
    studentList slist;
    do
    {
        menu();
        cout << "Choose an option:";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            cout << "Enter ID of the book you want to show: ";
            cin >> book_id;
            for (int i = 0; i < 5; i++)
            {
                if (book_id == blist.books[i].Id){
                    print_book_details(blist.books[i]);
                }
                
                else{
                cout<<"No book exists with this ID."<<endl<<endl;
                break;
                }
            }
            break;
        case 2:

            print_booklist(blist);
            break;
        case 3:

            addBook(blist);
            break;
        case 4:

            sort(blist);
            break;
        case 5:

            break;
        case 6:

            cout << "Enter ID of the student you want to show: ";
            cin >> std_id;
            for (int i = 0; i < 5; i++)
            {
                if (std_id == slist.std[i].ID){
                    print_student_details(slist.std[i]);
                }
                else{
                cout<<"No student exists with this ID."<<endl<<endl;
                break;
                }
            }
            break;
        case 7:
            print_studentlist(slist);
            break;
        case 8:
          
            break;
        case 9:
            
            break;
        case 0:
            break;
        default:
            cout << "Invalid input!";
        }
    } while (option != 0);

    return 0;
}

void print_book_details(Book any_book)
{
    cout << "Book ID= " << any_book.Id << endl;
    cout << "Book name= " << any_book.BookName << endl;
    cout << "Author= " << any_book.author << endl;
    cout << "ISBN= " << any_book.ISBN << endl;
    cout << "Book price= " << any_book.price << endl;
    cout << "Book pages= " << any_book.pages << endl;
}

void print_booklist(bookList list)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Book # " << (i + 1) << endl;
        cout << "ID:" << list.books[i].Id << endl;
        cout << "name:" << list.books[i].BookName << endl;
        cout << "author:" << list.books[i].author << endl;
        cout << "isbn:" << list.books[i].ISBN << endl;
        cout << "price:" << list.books[i].price << endl;
        cout << "pages:" << list.books[i].pages << endl;
    }
}

void print_student_details(student stdnt)
{
    cout << "ID= " << stdnt.ID << endl;
    cout << "Student name= " << stdnt.stdName << endl;
    cout << "Roll number= " << stdnt.rollNo << endl;
}

void print_studentlist(studentList list)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Student # " << (i + 1) << endl;
        cout << "ID= " << list.std[i].ID << endl;
        cout << "Student name= " << list.std[i].stdName << endl;
        cout << "Roll number= " << list.std[i].rollNo << endl;
    }
}

void menu()
{
    cout << "*****MAIN MENU*****" << endl;
    cout << "1.show details of a particular book." << endl;
    cout << "2.show all books." << endl;
    cout << "3.Add a new book." << endl;
    cout << "4.Sort the books." << endl;
    cout << "5.Delete all of the books." << endl;
    cout << "6.Print details of a single student." << endl;
    cout << "7.show all students." << endl;
    cout << "8.Add new student." << endl;
    cout << "9.Delete existing student." << endl;
    cout << "0.Exit." << endl;
    cout << "*************" << endl;
}

void sort(bookList list){
     for(int j=5;j>1;j--){
        for(int i=0;i<5-1;i++){
        if(list.books[j].Id>list.books[j+1].Id){
            Book temp= list.books[j];
            list.books[j]=list.books[j+1];
            list.books[j+1]=temp;
        }            
        }
    }
}

void addBook(bookList list){

    for(int i=0;i<5;i++){

        if(list.books[i].BookName.compare("")!=0){
            cout<<"No space to add a new book!";
        }
        else {
            cout<<"Enter ID= ";
            cin>>list.books[i].Id;
            cout<<"Enter name= ";
            cin.ignore();
            getline(cin,list.books[i].BookName);
            cout<<"Enter author's name= ";
            cin.ignore();
            getline(cin,list.books[i].author);
            cout<<"Enter ISBN= ";
            cin.ignore();
            getline(cin,list.books[i].ISBN);
            cout<<"Enter price= ";
            cin>>list.books[i].price;
            cout<<"Enter total number of pages= ";
            cin>>list.books[i].pages;
            cout<<"The user has been added!"<<endl<<endl;
            break;
        }
    }
}1

