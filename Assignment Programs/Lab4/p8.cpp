/*  Write a function the creates a vector of user given size M using new operator.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> *create_vector(int size)
{
    // Create a new vector using new operator
    vector<int> *myVector = new vector<int>(size);

    // Return the pointer to the vector
    return myVector;
}

int main()
{
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    // Create a vector using the create_vector function
    vector<int> *myVector = create_vector(size);

    // Do something with the vector
    for (int i = 0; i < size; i++)
    {
        (*myVector)[i] = i * 2;
        cout << (*myVector)[i] << " ";
    }

    // Free the memory allocated for the vector
    delete myVector;

    return 0;
}
