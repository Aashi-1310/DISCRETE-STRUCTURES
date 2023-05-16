//QUESTION 14
//RECURRENCE RELATION
#include<iostream>
using namespace std;
class recurrence{
	public:
	int n;
	int T1(int n)
		{
			if(n == 0)
				return 1;
			else
				return T1(n-1)+n;
		}
	int T2(int n)
		{
			if(n == 0)
				return 1;
			else
				return T2(n-1)+(n*n);
		}
	int T3(int n)
		{
			if(n == 1)
				return 1;
			else
				return (2*T3(n/2) + n);
		}	
		
	
};

int main()
{
	recurrence r;
	int n, t1, t2, t3;
	cout<<"Enter the number: ";
	cin>>n;
	t1 = r.T1(n);
	t2 = r.T2(n);
	t3 = r.T3(n);
	
	cout<<"\nRecurrence relation 1 for "<<n<<" : "<<t1;
	cout<<"\nRecurrence relation 2 for "<<n<<" : "<<t2;
	cout<<"\nRecurrence relation 3 for "<<n<<" : "<<t3;
	
}
