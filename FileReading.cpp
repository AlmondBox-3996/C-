// Program to Read files.
// Including necessary Header files
#include <iostream>
#include <fstream>
using namespace std;

// Main Code
int main()
{
    // Creating File object for reading
    ifstream file;

    // Creating String variable to store line by line elements of text file
    string l1;

    // Opening text file
    file.open("test.txt");

    // While loop which terminates as we reach the end of the text file
    while (file)
    {
        // Storing line by line elements from text file to line variable
        getline(file, l1);
        // Printing out line variable
        cout << l1 << endl;
    }

    // Closing file to prevent errors
    file.close();
}
