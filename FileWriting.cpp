// Program to Write in files
// Including necessary Header files
#include <iostream>
#include <fstream>
using namespace std;

// Main Code
int main()
{
    // Creating file object for writing
    ofstream file;

    // Creating string variable to store line by line for witing
    string l1;

    // Opening File
    file.open("test.txt");

    // While loop which terminates as text file gets down
    while (file)
    {
        // Accepting user input and storing in line variable
        getline(cin, l1);

        // Breaks if l1 = -1
        if (l1 == "-1")
        {
            break;
        }

        // Writing line by line into the text file
        file << l1 << endl;
    }
    // Closing file to prevent errors
    file.close();
}
