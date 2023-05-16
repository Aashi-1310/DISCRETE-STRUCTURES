//QUESTION 10
//PERMUTATION AND COMBINATION
//GENERATES ALL PERMUTATION OF A NUMBERS IN A SET
#include<iostream>
using namespace std;

class Permutation {
	
	public:
		void perm(int a[], int n, int b);                 //WITHOUT REPETITION
		void rperm(int a[], int c[], int n, int b);       //WITH REPETITION
		void swap(int& x, int& y)                         //SWAPS 2 NUMBERS
		{ int temp=0;
			temp= x;
			x=y;
			y=temp;
		}
		
};

void Permutation :: perm(int a[], int n, int b)         
{
	int temp, temp1;
	
	if(b==n-1)
	{
		for(int j=0; j<n; j++)
			cout<<a[j]<<" ";
			cout<<endl;	
	}
	else
	{
		for(int i=b; i<n; i++)
		{
			swap(a[b],a[i]);
			
			perm(a,n,b+1);
			
			swap(a[b],a[i]);          //RESWAP TO GET THE ORIGINAL SET
		}
	}
}

void Permutation :: rperm(int a[], int c[], int n, int b)                  
{
	if(b==n)
	{
		for(int i=0; i<n; i++)
			cout<<c[i]<<" ";
			cout<<endl;	
}
	else
	{
		for(int i=0; i<n; i++)
		{
			c[b] = a[i];
			rperm(a,c,n,b+1);
		}
	}
}

int main()
{
	int n, *ar;
	int b=0,opt;
	
	cout<<"Enter the number of digits: ";
	cin>>n;
	cout<<"Enter the digits:";
	ar = new int[n];
	for (int i=0; i<n; i++){
		cin>>ar[i];
	}
	int arr[n];
	Permutation p;
	
	cout<<"CHOOSE:"<<endl;
	cout<<"1.PERMUTATION WITHOUT REPETITION"<<endl;
	cout<<"2.PERMUTATION WITH REPETITION"<<endl;
	cout<<"3.EXIT"<<endl;
	while(opt!=3){
		cout<<"Enter your choice:";
		cin>>opt;
		switch(opt){
			case 1: p.perm(ar,n,b);
				break;
			case 2: p.rperm(ar,arr,n,b);
				break;
			case 3: break;
			default: cout<<"Invalid Option";
				break;
		}
	}
	
	return 0;
	
}
