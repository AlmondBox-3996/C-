#include <iostream>
using namespace std;
// 123   45 
class Plants // indicates class A
{
public:
    Plants()
    {
        cout << "This is a producer\n";
    }
};

class Herbivores : public Plants // indicates class B derived from class A
{
public:
    Herbivores()
    {
        cout << "This is a primary consumer\n";
    }
};

class Carnivore : public Herbivores // indicates class C derived from class B
{
public:
    Carnivore()
    {
        cout << "This is a secondary consumer\n";
    }
};

class Secondary_Carnivore : public Carnivore // indicates class D derived from class C
{
public:
    Secondary_Carnivore()
    {
        cout << "This is a tertiary consumer\n";
    }
};

int main()
{
    Secondary_Carnivore s;
    return 0;
}