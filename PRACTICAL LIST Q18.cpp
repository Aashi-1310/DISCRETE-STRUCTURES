//QUESTION 18
//GRAPHS
//GIVES THE NUMBER OF PATHS BETWEEN TWO GIVEN VERTICES
#include<iostream>
using namespace std;

class Euler
{
		int x, **arr, **An;

	public:
		void vert(int n);
		void edges(int n, int e);
		void printadj();			//prints adjacency matrix
		void multiply();
		void display(int **An);
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

void Euler :: multiply()
{
	An = new int*[x];
	for(int i=0; i<x; i++)
	
	{
		An[i] = new int[x];
		for(int j=0; j<x; j++)
			An[i][j] = 0;
	}
	int a3[x][x],n;
	cout<<"\nEnter the path length: ";
		cin>>n;
		
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<x; j++)
		{
			An[i][j] = arr[i][j];
		}
	}
	if(n == 1)
	{
		for(int i=0; i<x; i++)
		{
			for(int j=0; j<x; j++)
			{
				cout<<"|"<<An[i][j]<<"|";
			}
			cout<<endl;
		}
	else
	{
		for(int l=2; l<=n; l++)
		{          
			for(int i=0;i<x; i++)
			{
				for(int j=0; j<x; j++)
				{
					a3[i][j] = 0;
					
					for(int k=0; k<x; k++)
						a3[i][j] +=arr[i][k]*An[k][j];
				}
			}
			for(int i=0; i<x; i++)
			{
				for(int j=0; j<x; j++)
					An[i][j] = a3[i][j];
			}
		}
	}
	display(An);
}

void Euler :: display(int **An)
{
	char source,des;
	cout<<"\nEnter the source: "<<endl;
	cin>>source;
	cout<<"\nEnter destination: "<<endl;
	cin>>des;
	
	cout<<"\nNumber of edges path between "<<(source)<<" and "<<(des)<<" is:";
	source = source - 97;
	des = des -97;
	cout<<An[source][des];
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
		
		
		g.multiply();
		
		
	return 0;
}
