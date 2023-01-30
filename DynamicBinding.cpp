// Dynamic Binding
#include<iostream>
using namespace std;

// Creating Parent Class
class Parent
{
    public:
        virtual void func()
        {
            // Printing "Parent Function" on calling func()
            cout << "Parent Function" << endl;
        }
};

// Creating Child Class
class Child : public Parent
{
    private:
        void func()
        {
            // Printing "Child Function" on calling func()
            cout << "Child Function" << endl;
        }
};

// Creating grandChild Class
class grandChild : public Child
{
    private:
        void func()
        {
            // Printing "grandChild Function" on calling func()
            cout << "grandChild Function" << endl;
        }
};

// Using Pointer to call Parent function and avoid function overide
void funcall(Parent *p)
{
    p -> func();
}

int main()
{
    // Calling function for parent
    funcall(new Parent);
    // Calling function for child
    funcall(new Child);
    // Calling function for grandChild
    funcall(new grandChild);
    return 0;
}