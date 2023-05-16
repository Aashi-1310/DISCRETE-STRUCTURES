//QUES 20
//TREES
#include<iostream>
using namespace std;

int leafnodes(int m, int i)
{	
	return (i*(m-1)+1);
	
}

int main()
{
	int m, i, l;
	
	cout<<"\nEnter the value of m in m-ary tree: ";
	cin>>m;
	cout<<"\nEnter the value of internal vertices: ";
	cin>>i;
	
	l = leafnodes(m,i);
	cout<<"\nThe number of leaf nodes in the m-ary tree is: "<<l;
	
	return 0;
}
