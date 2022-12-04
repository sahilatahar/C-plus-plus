// Login and Registration System

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

int main();

class User
{
    string username;
    string password;
    string fileUsername;
    string filePassword;

public:
    void login()
    {
        reset();
        cout << "Please, Enter you usename: ";
        cin >> username;
        fflush(stdin);
        if (getUserFile())
        {
        inputPasswordAgain:
            cout << "Please, Enter you password: ";
            cin >> password;
            if (password == filePassword)
            {
                cout << "\033[32;40m";
                cout << "Login Successfully" << endl;
                cout << "\033[0m";
            }
            else
            {
                cout << "\033[31;40m";
                cout << "Wrong Password Entered" << endl;
                cout << "\033[0m";
                goto inputPasswordAgain;
            }
        }
        else
        {
            cout << "\033[31;40m";
            cout << "User not found!" << endl;
            cout << "\033[0m";
            main();
        }
    }
    void registration()
    {
        reset();
        cout << "Please, Enter you usename: ";
        cin >> username;
        fflush(stdin);
        cout << "Please, Enter you password: ";
        cin >> password;

        createUser();
        cout << "\033[32;40m";
        cout << "Registration Successful" << endl;
        cout << "\033[0m";
        cout << "username : " + username + "\t password : " + password << endl;
        main();
    }

private:
    void reset()
    {
        username.clear();
        password.clear();
    }
    void createUser()
    {
        ofstream userFile(username + ".txt");

        userFile << username << endl;
        userFile << password << endl;

        userFile.close();
    }
    bool getUserFile()
    {
        string userDetails;
        ifstream userFile(username + ".txt");

        if (!userFile)
        {
            return false;
        }
        getline(userFile, fileUsername);
        getline(userFile, filePassword);

        return true;
    }
};

int main()
{   
    User user;
    int input;
    cout << "Choose an option:" << endl;
    cout << "[1] Register." << endl;
    cout << "[2] Login." << endl;
    cout << "Your choice: ";
takeInputAgain:
    cin >> input;

    switch (input)
    {
    case 1:
        user.registration();
        break;
    case 2:
        user.login();
        break;
    default:
        cout << "Please, choose correct option :";
        goto takeInputAgain;
    }
    getch();
    return 0;
}