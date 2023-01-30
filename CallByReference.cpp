// Call By Reference
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int s;
    s = *x;
    *x = *y;
    *y = s;
}

int main()
{
    int x = 500, y = 100;
    swap(&x, &y); // passing value to function
    cout << "Value of x is: " << x << endl
         << "Value of y is: " << y << endl;
    return 0;
}