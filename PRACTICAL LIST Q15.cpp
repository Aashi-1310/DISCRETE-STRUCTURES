//QUESTION 15
//FUNCTIONS
//GIVES THE SOLUTION FOR A GUVEN POLYNOMIAL
#include<iostream>
#include<math.h>
using namespace std;

class polynomial
{
	int p[10],deg, com=0, x;
	
	public:
		void enter()
		{
			cout<<"Enter degree of polynomial : ";
			cin>>deg;
			
			for(int i = deg; i>=0; i--)
			{if (i==0){
				cout<<"Enter the constant : ";
				cin>>p[i];
			}
			else if (i==1){
				cout<<"Enter the coefficient of x : ";
				cin>>p[i];
			}
			else{
			cout<<"Enter the coefficient of x^"<<i<<" : " ;
			cin>>p[i];
			}
		}
	}
		
		void display()
		{
			cout<<"\nThe polynomial entered is : ";
			
			for(int i=deg; i>=0; i--)
			{
				if(i==0)
				cout<<p[i];
				else if (i==1)
				cout<<p[i]<<"x + ";
				else
				cout<<p[i]<<"x^"<<i<<" + ";
			}
		}
		
		void compute()
		{
			
			cout<<"\nInput value of x to find f(x): ";
			cin>>x;
			
			int c = deg;
			
			for(int i=c; i>=0;i--,c--)
			{
				com += p[i]*(pow(x,c));
			}
				
			
			cout<<"\nf(x): "<<com;
		}
	
};

int main()
{
	polynomial p;
	p.enter();
	p.display();
	p.compute();
	return 0;
}
