# include <iostream>
using namespace std;

string RomInput()
{
    string rom;
    cout << "Enter Roman Value : " << endl;
    cin >> rom;
    return rom;
}

int RomToInt(string rom)
{
    int sum = 0;
    for (int i = 0; i < len(rom); i++)
    {
        if (rom[i] == 'I')
        sum += 1;
        else if (rom[i] == 'V')
        sum += 5;
        else if (rom[i] == 'X')
        sum += 10;
        else if (rom[i] == 'L')
        sum += 50;
        else if (rom[i] == 'C')
        sum += 100;
        else if (rom[i] == 'D')
        sum += 500;
        else if (rom[i] == 'M')
        sum += 1000;
        else 
        cout << "Invalid Number";
    }
    return sum;
}

int main()
{
    RomInput();
    cout << "The Roman Number is " << RomToInt(RomInput) << endl;
}