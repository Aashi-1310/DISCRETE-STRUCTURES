//QUES 8
//BUBBLE SORT
#include<iostream>
using namespace std;

class Bubsort {
	
	public:
		void abubsort(int a[], int n);      //Arranges in Ascending Order
		void dbubsort(int a[], int n);      //Arranges in Discending Order
		void display(int a[], int n);
};


void Bubsort :: abubsort(int a[], int n)
	{ 
		int temp = 0;
		
		for(int j=1; j<=n; j++)
		{
			for(int i=0; i<n-j; i++)
			{
				if(a[i] >= a[i+1])
				{
					temp = a[i];
					a[i] = a[i+1];
					a[i+1] = temp;
				}
			}
			
			cout<<"\nPass "<<j<<" : ";
			display(a,n);
			cout<<endl;
		}
		
	
	}
	
	void Bubsort :: dbubsort(int a[], int n)
	{ 
		int temp = 0;
		
		for(int j=1; j<=n; j++)
		{
			for(int i=0; i<n-j; i++)
			{
				if(a[i] <= a[i+1])
				{
					temp = a[i];
					a[i] = a[i+1];
					a[i+1] = temp;
				}

			}
			
			cout<<"\nPass "<<j<<" : ";
			display(a,n);
			cout<<endl;
		}
		
	
	}
	
void Bubsort :: display(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	Bubsort b;
	int opt,n;
	
	cout<<"\nEnter the number of terms: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"\nEnter the array to be sorted: ";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	while(opt!=3){
	cout<<"\nDo you want to sort in: "<<endl;
	cout<<"1. Ascending Order"<<endl;
	cout<<"2. Descending Order"<<endl;
	cout<<"3. Exit"<<endl;
	cin>>opt;
	
	switch(opt)
	{
		case 1: b.abubsort(arr,n);
				break;
		case 2: b.dbubsort(arr,n);
				break;
		case 3: break;
		default: cout<<"Invalid Option!";
				break;
	}
}
	return 0;
}
	
