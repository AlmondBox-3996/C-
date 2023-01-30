#include <iostream>
using namespace std;

// Creating a Function sumofnumbers with 2 parameters
float sumofnumbers(float x, float y)
{
    // Returning the sum of 2 parameters
    return x + y;
}

// Creating a Function sumofnumbers but with 3 parameters
float sumofnumbers(float x, float y, float z)
{
    // Returning the sum of 3 parameters
    return x + y + z;
}

int main()
{
    // Calling sumofnumbers with different no. of parameters to see static binding
    cout << sumofnumbers(1,2,3) << endl;
    cout << sumofnumbers(1,2) << endl;
    return 0;
}