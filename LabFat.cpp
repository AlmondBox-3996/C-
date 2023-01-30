// Including standard header files
# include <iostream>
# include <string.h>
using namespace std;

// Creating Base Class 'Player'
class Player
{
private:
    // Private variables to store data
    string name = "Ankit";
    string nationality = "Indian";
public:
    // Creating Virtual Function to Display the Data
    virtual void display()
    {
        cout << name << endl;
        cout << nationality << endl;
    }
};

// Creating Derived class 'event'
class event: public Player
{
private:
    // Private variables to store data
    string evn = "soccer";
    string evt = "team";
public:
    // Creating Virtual Function to Display the Data
    void display()
    {
        cout << evt << endl;
        cout << evn << endl;
    }
};

// Creating Derived class 'personnel'
class personnel: public Player
{
private:
    // Private variables to store data
    int age = 19;
    int medal = 5;
public:
    // Creating Virtual Function to Display the Data
    void display()
    {
        cout << age << endl;
        cout << medal << endl;
    }
};

// Creating Function to allow Overloading of display function by dynamic binding
void funcall(Player *p)
{
    p -> display();
}

int main()
{
    // Displaying all data on demand
    funcall(new Player);
    funcall(new event);
    funcall(new personnel);
    return 0;
}
