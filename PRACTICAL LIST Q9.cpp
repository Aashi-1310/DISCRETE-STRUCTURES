//QUESTION 9
//INSERTION SORT
#include<iostream>
using namespace std;

class insertion {
	
		public:
		void ainsertion(int a[], int n);         //Arranges in Ascending Order
		void dinsertion(int a[], int n);         //Arranges in Discending Order
		void display(int a[], int n);
	
};

void insertion :: ainsertion(int a[], int n)
	{ 
			int temp, j;
			
			for(int i=1; i<n; i++)
			{
				temp = a[i];
				j = i-1;
				
				while(j >=0 && a[j] > temp)
				{
					a[j+1] = a[j];
					j--;
				}
				
				a[j+1] = temp;
				
					cout<<"\nPass "<<i<<" : ";
					display(a,n);
					cout<<endl;
		
			}
		
	
	}
	
	void insertion :: dinsertion(int a[], int n)
	{ 
		int temp, j;
			
			for(int i=1; i<n; i++)
			{
				temp = a[i];
				j = i-1;
				
				while(j >=0 && a[j] < temp)
				{
					a[j+1] = a[j];
					j = j-1;
				}
				
				a[j+1] = temp;
				
					cout<<"\nPass "<<i<<" : ";
					display(a,n);
					cout<<endl;
		
			}
	
	}
	
void insertion :: display(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	insertion i;
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
		case 1: i.ainsertion(arr,n);
				break;
		case 2: i.dinsertion(arr,n);
				break;
		case 3: break;
		default:cout<<"Invalid Option!";
				break;
	}
}
	return 0;
}
	
