//QUESTION 19
//GRAPHS
//VHECKS WHETHER THE GIVEN GRAPHS FORMS AN EULER PATH OR CIRCUIT
#include <iostream>
using namespace std;

class Euler
{
	int **arr, x, rowsum,rowsum1;

	
	public:
		Euler()
		{
			rowsum=0;
			rowsum1=0;
		}
		
		public:
		void vert(int n);
		void edges(int n, int e);
		void printadj();			//prints adjacency matrix
		bool eulercirc();
		void eulerpath();
};

void Euler :: vert(int n)
{
	x = n;
	arr = new int*[x];
	
	for(int i=0; i<n; i++)
	
	{
		arr[i] = new int[x];
		for(int j=0; j<n; j++)
			arr[i][j] = 0;
	}
	
}

void Euler :: edges(int n, int e)
{
	arr[n][e] = 1;
	arr[e][n] = 1;
}


void Euler :: printadj()
{
	
	cout<<"  ";
	for(int i=0; i<x; i++)
		cout<<char(65+i)<<"  ";
		
	cout<<endl;
	
	for(int i=0; i<x; i++)
	{
		cout<<char(65+i);
		for(int j=0; j<x; j++)
		{
			cout<<" "<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool Euler :: eulercirc()
{
	int flag=0;
	for(int i=0;i<x;i++){2
		for(int j=0;j<x;j++){
			rowsum+=arr[i][j];
			}
		if((rowsum%2)!=0){
			return(false);
			break;
		}
	}
	return true;
	
}

void Euler :: eulerpath()
{
	int check=0;
	for(int i=0;i<x;i++){
		rowsum1=0;
		for(int j=0;j<x;j++){
			rowsum1+=arr[i][j];
			
			}
				if((rowsum1%2)!=0){
				check++;
		}
	}
	if(check==2||check==0){
		cout<<"It is an Euler Path"<<endl;
	}
	else
		cout<<"It is not an Euler Path"<<endl;
}

int main()
{
	int n, e;
	char a, b;
	char *c;
	Euler g;
	bool res;
	int a1,b1;
	
	cout<<"\nEnter the number of vertices: ";
	cin>>n;
	c = new char[n];
	cout<<"\nEnter the number of edges: ";
	cin>>e;
	
	g.vert(n);
	
	
	for(int i=0; i<n; i++)
	{
		cout<<"\nName of vertex "<<(i+1)<<" :";
		cin>>c[i];
	}
		
	
	
	for(int i=1; i<=e ;i++)
	{
		cout<<"\nEnter vertices of edge "<<i<<" :";
		cin>>a>>b;
		for(int i = 0; i<e; i++)
		{
			if(a == c[i])
				a1 = i;
				
			if(b == c[i])
				b1 = i;
		}
		
		g.edges(a1,b1);
	}

		cout<<"\nThe Ajacency Matrix: "<<endl;
		g.printadj();
	int opt;	
	cout<<"CHECK FOR:"<<endl;
	cout<<"1. EULER CIRCUIT"<<endl;
	cout<<"2. EULER PATH"<<endl;
	cout<<"3. EXIT"<<endl;
	while(opt!=3){
		cout<<"Enter your choice:";
		cin>>opt;
	
	switch(opt)
	{
		case 1: if(g.eulercirc()== true) 
				cout<<"It is an Euler Circuit"<<endl;
				else
				cout<<"It is not an Euler Circuit"<<endl;
				break;
		case 2: g.eulerpath();
				break;
		case 3: break;
		default: cout<<"Invalid choice";
				break;
	}
}
}
