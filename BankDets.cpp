#include <iostream>
using namespace std;

// Creating a Bank Class
class Bank
{
private:
    // Private variables are personal information
    int acno;
    char name[30];
    long balance;

public:
    // Defining Functions for Smooth Working of the Bank
    // Function to Open an Account
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }

    // Function to Display Account Details
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Function to Deposit certain amount into the account
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }

    // Function to Withdraw an amount from the account
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }

    // Defining a Search Function
    int Search(int);
};

// Search Function Definition
int Bank::Search(int a)
{
    if (acno == a)
    {
        ShowAccount();
        return (1);
    }
    return (0);
}

// Main Code
int main()
{
    // Creating an Object 'C', using 'Bank' Class
    Bank C[3];

    int found = 0, a, ch, i;
    for (i = 0; i <= 2; i++)
    {
        C[i].OpenAccount();
    }

    do
    {
        // display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1: // displating account info
            for (i = 0; i <= 2; i++)
            {
                C[i].ShowAccount();
            }
            break;
        case 2: // searching the record
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++)
            {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++)
            {
                found = C[i].Search(a);
                if (found)
                {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++)
            {
                found = C[i].Search(a);
                if (found)
                {
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // exit
            cout << "Have a nice day" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    } 
    while (ch != 5);
    return 0;
}
