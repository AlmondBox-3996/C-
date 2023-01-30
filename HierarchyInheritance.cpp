# include <iostream>
using namespace std;

class base
{
    protected:
        int a;
    public:
        void getdata()
        {
            cin >> a;
        }
        void display()
        {
            cout << a;
        }
};

class d1: public base
{
    protected:
        int b;
    public:
        void getdata()
        {
            cin >> b;
        }
        void display()
        {
            cout << b;
        }
};

class d2: public base
{
    protected:
        int c;

    public:
        void getdata()
        {
            cin >> c;
        }
        void display()
        {
            cout << c;
        }
};

int main()
{
    d1 derived1;
    derived1.getdata();
    derived1.getdata();
    derived1.display();
    derived1.display();
}