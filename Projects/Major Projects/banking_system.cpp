#include <iostream>
#include <string>

using namespace std;

class Menus
{
};

// This class will display all the customer related functions
class dispRecords
{

public:
    void addDetails(int, string name, string address, float);
    void displayCustomers();
    void deleteAccount(int);
    void updateBalance(int, float);
    void updateCustomer();
    int lastAccount();
    int accountExists(int);
    string getName(int);
    string getAddress(int);
    float getBalance();
    int getRecord(int);
    void display(int);
    void displayList();
    int accountNo;
    string name, address;
    float balance;
};

int main()
{
}