//QUESTION 17
//GRAPHS
//GIVES THE IN-DEGREE AND OUT-DEGREE OF A DIRECTED GRAPH
#include<iostream>
using namespace std;

class Graph
{
	int x, **arr;
	
	public:
		void vert(int n);
		void edges(int n, int e);
		void printadj();			//prints adjacency matrix
		int degin(int ch);				//computes in-degree
		int degout(int ch);				//computes out-degree
};

void Graph :: vert(int n)
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

void Graph :: edges(int n, int e)
{
	arr[n][e] = 1;
}


void Graph :: printadj()
{
	cout<<"\nThe Ajacency Matrix: "<<endl;
	
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

int Graph :: degin(int ch)
{
	int count=0;
	
	for(int i=0; i<x; i++)
	{
			if(arr[i][ch] == 1)
				count++;
			
	}
	
	return count;
}

int Graph :: degout(int ch)
{
	int count1=0;
	
	for(int i=0; i<x; i++)
	{
			if(arr[ch][i] == 1)
				count1++;
	}
	
	return count1;
}

int main()
{
	int n, e, a1, b1, ch1;
	char a, b, ch, ans;
	char *c;
	Graph g;
	
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
		cout<<"\nEnter vertices of edge (in directed order: vertex1 --> vertex2) "<<i<<" :";
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

		g.printadj();
		cout<<endl;
			cout<<"| VERTEX | IN DEG | OUT DEG |"<<endl;
	
		for(int i=0; i<n; i++)
		{
			cout<<"|    "<<c[i]<<"   |    "<<g.degin(i)<<"   |    "<<g.degout(i)<<"    |"<<endl;
		}

	
	return 0;
}
