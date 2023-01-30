# include <iostream>
# include <cmath>
using namespace std;

class Number
{
	private:
		double num;

	public:
		
		Number()
		{
			cout<<"Enter number "<<endl;
			cin>>num;
			cout<<"Number is "<<num<<endl;
		}
		
		bool isZero()
		{
			if (num==0) return true;
			else return false;
		}
		
		bool isPositive()
		{
			if (num>0) return true;
			else return false;
		}
		
		bool isNegetive()
		{
			if (num<0) return true;
			else return false;
		}
		
		bool isOdd()
		{
			int n= num;
			if (n%2!=0) return true;
			else return false;
		}
		
		bool isEven()
		{
			int n= num;
			if (n%2==0) return true;
			else return false;
		}
		
		bool isPrime()
		{
			int c=0;
			int n= num;
			for (int i=2; i<num; i++)
			{
				if (n%i==0)
				{
					c++;
				}
			}
			if (c==0) return true;
			else return false;
		}
		
		bool isArmstrong()
		{
			int s=0;
			int n=num;
			int d=n;
			while (n!=0)
			{
				s=s+((n%10)*3);
				n=n/10;
			}
			if (s==d) return true;
			else return false;
		}
		
		double getFactorial()
		{
			double f=1;
			for (double i=1; i<=num; i++)
			{
				f=f*i;
			}
			return f;
		}
		
		double getSqrt()
		{
		    double n=sqrt(num);
		    return n;
		}
		
		double getSqr()
		{
			return num*num;
		}
		
		double sumDigits()
		{
			int s=0;
			int n=num;
			while (n!=0)
			{
				s=s+(n%10);
				n=n/10;
			}
			double a=s;
			return a;
		}
		
		double getReverse()
		{
		    int s=0;
		    int n=num;
		    while (n!=0)
		    {
		        s=(s*10)+(n%10);
		        n=n/10;
		    }
		}
		
		void listFactor()
		{
		    int n=num;
		    for (int i=0; i<=n; i++)
		    {
		        if (n%i==0) cout<<i;
		    }
		}
		
		void dispBinary()
        {
            int n=num;
            int bin[32];
            int i = 0;
            while (n > 0) 
            {
                bin[i] = n % 2;
                n = n / 2;
                i++;
            }
            for (int j = i - 1; j >= 0; j--)
                cout << bin[j];
        }
};

int main()
{
	Number N;
	cout<<N.isZero()<<endl;
	cout<<N.isPositive()<<endl;
	cout<<N.isNegetive()<<endl;
	cout<<N.isEven()<<endl;
	cout<<N.isOdd()<<endl;
	cout<<N.isPrime()<<endl;
	cout<<N.isArmstrong()<<endl;
	cout<<N.getFactorial()<<endl;
	cout<<N.getSqrt()<<endl;
	cout<<N.getSqr()<<endl;
	cout<<N.sumDigits()<<endl;
	N.listFactor();
	cout<<endl;
	N.dispBinary();
	cout<<endl;
}