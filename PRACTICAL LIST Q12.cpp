//QUESTION 12
//GENERATES ALL THE COMBINATIONS OF SOLUTIONS 
#include<iostream>
using namespace std;
class Combos{
	public:
	
	void display(int b[], int n){
	for (int i=0; i<n;i++)
		cout<<b[i]<<" ";
	}
	
	int combos(int b[],int k,int n,int sum)
	{ 
		if (k==0) 
		{
			b[k]=sum;
		display (b,n);
		cout<<endl;
		return 0;
		}
		for (int i=0; i<=sum; i++)
		{
				b[k]=i;
			combos(b,k-1,n,sum-i);
		}

	}
		
};

int main()
{	
int n,sum;
		cout<<"\nEnter sum: ";
		cin>>sum;
		cout<<"\nEnter no. of terms: ";
		cin>>n;
int b[n];

	Combos c;
	
		c.combos(b,n-1,n,sum);
	return 0;
	
	
}
