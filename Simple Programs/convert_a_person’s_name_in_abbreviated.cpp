//Convert a Person’s Name in Abbreviated

#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int i = 0;
	cout << "Enter your name: ";
	getline(cin,name);
	
	cout << "Hello Ms/Mr. " << name[0];
	
	while(i != name.length())
	{
		if(name[i] == ' ') { 
			while(name[i] == ' ')
			{
				i++;
				}
				if(name[i] != ' ') {
				cout << name[i];
					break;
					}
			}
		i++;
	}
	return 0;
	}
