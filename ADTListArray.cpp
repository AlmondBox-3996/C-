#include <bits/stdc++.h>
using namespace std;

// Creating a Class List
class List
{
private:
    int a[5];
    int last;

public:
    // Construct List with defining many List Functions
    List()
    {
        last = -1;
    }
    void insertend(int x);
    void insertbetween(int data, int pos);
    void deletedata(int pos);

    void display();
};

// Defining Function to add at the end of the list (data is the parameter)
void List::insertend(int x)
{
    a[last + 1] = x;
    last++;
}

// Defining Function to add at a certain position into the list (data and position are parameters)
void List::insertbetween(int data, int position)
{
    for (int i = last; i >= position; i--)
        a[i + 1] = a[i];
    a[position] = data;
    last++;
}

// Defining Function to remove at a particular position of the list (position is the parameter)
void List::deletedata(int position)
{
    for (int i = position; i < last; i++)
    {
        a[i] = a[i + 1];
    }
    last--;
}

// Defining Function to Display all elements of the list
void List::display()
{
    cout << "\nElements in the list are: " << endl;
    for (int i = 0; i <= last; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    List l1;
    l1.insertend(1);
    l1.insertend(2);
    l1.insertend(3);
    l1.insertend(4);
    l1.insertend(5);
    l1.deletedata(2);
    l1.insertbetween(7, 2);
    l1.display();
    return 0;
}
