//QUESTION 6
//TOWER OF HANOI
#include<iostream>
using namespace std;

class TOH {
	
	public:
		int toh(int n)
		{
			if(n == 1)
				return 1;
			else
				return 2 * toh(n-1) + 1;
			
		}
};

int main()
{
	TOH t;
	int n,m;
	
	cout<<"\nEnter the number of discs: ";
	cin>>n;
	m = t.toh(n);
	cout<<"\nNumber of moves is: "<<m;
	
	return 0;
	
}
