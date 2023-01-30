// Program to Read and Write in files
// Including necessary Header files
#include <iostream>
#include <fstream>
using namespace std;

// Main Code
int main()
{
    // Creating file object for reading and writing
    fstream file;

    // Creating string variable to store line by line for witing
    string l1;

    // Opening File to write
    file.open("Ankit.txt");

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

    // Creating String variable to store line by line elements of text file
    string l2;

    // Opening text file to read
    file.open("Ankit.txt");

    // While loop which terminates as we reach the end of the text file
    while (file)
    {
        // Storing line by line elements from text file to line variable
        getline(file, l2);
        // Printing out line variable
        cout << l2 << endl;
    }
    // Closing file to prevent errors
    file.close();
}
