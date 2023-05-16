//QUES 7
//BINARY SEARCH USING RECURSION
#include<iostream>
using namespace std;

class bin{
	
	int n, num, beg, end;
	public:
	
	void enter()
	{
	
	cout<<"Enter the length of the array: "<<endl;
	cin>>n;
	
	int ar[n];
	
	cout<<"Enter values in sorted way: ";
	for(int i=0; i<n; i++)
	{
		cin>>ar[i];
	}
	
	cout<<"Enter element you want to find: ";
	cin>>num;
	
	beg = 0;
	end = n-1;
	binsearch(ar,num,beg,end);

}

int binsearch(int ar[], int num, int beg, int end)
{
	int mid;
		mid = (beg+ end)/2;
		
		if(ar[mid]==num)
		{
			cout<<"\nElement found at position "<<mid+1;
			return 0;
		}
		else if(num > ar[mid])
		{
			binsearch(ar,num,mid+1,end);
		}
		else 
		{
			binsearch(ar,num,beg,mid-1);
		}
	}


};

int main()
{
 bin b;
 b.enter();	
}