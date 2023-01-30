#include <iostream>
using namespace std;

class add
{
    public:
        int a;
        int b;
        int c;
        void sum()
        {
            c = a + b;
        }
        void getdata()
        {
            cin >> a;
            cin >> b;
        }
        void display()
        {
            cout << c << endl;
        }
};

int main()
{
    add x;
    x.getdata();
    x.sum();
    x.display();
}