#include <iostream>
#include <fstream>
#include <list>
#include <map>

using namespace std;

class Contact
{
    static string name;
    static long long int phoneNo;
    static string address;
    static char input;

public:
    void addContact();
    void editContact();
    void searchContact();
    void deleteContact();
};

void Contact ::addContact()
{
    cout << "Enter the Name: ";
    getline(cin, name);
    cout << "Enter the phone number: ";
    cin >> phoneNo;
    cout << "Do you want to add the address[Y/N]: ";
    cin >> input;

    if (input == 'y' || input == 'y')
    {
        cout << "Enter the address: ";
        getline(cin, address);
    }

    // writing into file
    ofstream myFile;
    myFile.open("Contact_List.txt", ios::app);

    myFile << "Name : " << name << endl;
    myFile << "Phone No : " << phoneNo << endl;
    myFile << "Address : " << address << endl;

    myFile.close();
}

void Contact ::searchContact()
{
    list<map<string, string>> Contacts;
    cout << "**********Search Contact***********" << endl;
    cout << "Enter the Name: ";
    getline(cin, name);

    ifstream myFile;
    myFile.open("Contact_List.txt", ios::in);
}

void Contact ::editContact()
{
}

int main()
{

    return 0;
}