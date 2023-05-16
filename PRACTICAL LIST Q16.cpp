//QUESTION 16
//GRAPHS 
//CHECKS WHETHER THE GIVEN GRAPH IS COMPLETE
#include<iostream>
using namespace std;

class Graph
{
	int x, **arr;
	char *v;
	
	public:
		void vert(int n);
		void edges();
		void printadj();			//prints adjacency matrix
		bool check();				//checks if it is complete graph or not
};

void Graph :: vert(int n)
{
	x = n;
	v = new char[n];
	for(int i=0; i<n; i++)
	{
		cout<<"\nName of vertex "<<(i+1)<<" :";
		cin>>v[i];
	}
	arr = new int*[x];
	
	for(int i=0; i<n; i++)
	{
		arr[i] = new int[x];
		for(int j=0; j<n; j++)
			arr[i][j] = 0;
	}
	
}

void Graph :: edges()
{	int n,e,ed;
	cout<<"\nEnter the number of edges: ";
	cin>>ed;
	for(int i=1; i<=ed ;i++)
	{	char a,b;
		cout<<"\nEnter vertices of edge "<<i<<" :";
		cin>>a>>b;
		for(int i = 0; i<ed; i++)
		{
			if(a == v[i])
				n = i;
				
			if(b == v[i])
				e = i;
		}
	arr[n][e] = 1;
	arr[e][n] = 1;
}
}


void Graph :: printadj()
{
	
	cout<<"  ";
	for(int i=0; i<x; i++)
		cout<<v[i]<<"  ";
		
	cout<<endl;
	
	for(int i=0; i<x; i++)
	{
		cout<<v[i];
		for(int j=0; j<x; j++)
		{
			cout<<" "<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool Graph :: check()
{
	for(int i=0; i<x; i++)
	{
		for(int j =0; j<x; j++)
		{
			if((i==j)&&(arr[i][j] != 0))
				return false;
				
			if((i != j) && (arr[i][j]!=1))
				return false;
		
		}
	}
		return true;
}


int main()
{
	int n, e;
	char a, b;
	Graph g;
	bool res;
	int a1,b1;
	
	cout<<"\nEnter the number of vertices: ";
	cin>>n;
	
	
	
	g.vert(n);
	g.edges();

		cout<<"\nThe Ajacency Matrix: "<<endl;
		g.printadj();
		
		res = g.check();
		if(res == true)
			cout<<"\nIt is a complete graph";
		else
			cout<<"\nIt is not a complete graph";
	
	return 0;
}
