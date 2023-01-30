# include <iostream>
using namespace std;

class volume
{
    public:
        double l,b,h,vol;
        void getdata()
        {
            cin >> l;
            cin >> b;
            cin >> h;
        }
        void volcalc()
        {
            vol = l*b*h;
        }
        void display()
        {
            cout << vol;
        }
};

int main()
{
    volume v;
    v.getdata();
    v.volcalc();
    v.display();
}