# include <iostream>
using namespace std;

// Creating base class "shape"
class shape
{
    protected:
        int w;
        int h;

    public:
        void getdata(int width, int height)
        {
            w = width;
            h = height;
        }
};

// Creating a derived class "rectangle"
class Rectangle : public shape
{
    // private:
    // w,h
    public:
        int area()
        {
            return (w*h);
        }
};

int main()
{
    // Creating an object for the derived class
    int a,b;
    cin >> a >> b;
    Rectangle r;
    r.getdata(a, b);
    cout << "Length: " << a << endl << "Width: " << b << endl << "Area: " << r.area() << endl;
}