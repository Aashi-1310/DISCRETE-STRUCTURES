//QUESTION 10
//PERMUTATIONS AND COMBINATIONS
#include <iostream>
using namespace std;
class pnc{
	private:
		int n;
		int r;
	public:
		//TO FIND PERMUTATIONS
		int npr(int n,int r){
			if (r>n){
				return 0;
			}
			else if (r==0){
				return 1;
			}
			else{
				return (n*npr(n-1,r-1));
			}
		}
		// TO FIND COMBINATIONS
		int ncr(int n,int r){
			if (r>n){
				return 0;
			}
			else if (r==n || r==0 || n==0){
				return 1;
			}
			else{
				return (ncr(n-1,r-1)+ncr(n-1,r));
			}
		}
};

int main(){
	int ch,n,r;
	pnc a;
	cout<<"ENTER \n";
	cout<<"1. TO FIND THE NUMBER OF PERMUTATIONS \n";
	cout<<"2. TO FIND THE NUMBER OF COMBINATIONS \n";
	cout<<"3. TO EXIT \n";
	while (ch!=3){
		cout<<"\nEnter your choice:";
	    cin>>ch;
	    switch(ch){
	    	case 1 : cout<<"Enter the total number of objects:";
					 cin>>n;
					 cout<<"Enter the number of objects to be arranged:";
					 cin>>r;
	    	         cout<<"The number of permutations are:";
	    	         cout<<a.npr(n,r)<<endl;
	    	         break;
	    	case 2 : cout<<"Enter the total number of objects:";
				     cin>>n;
					 cout<<"Enter the number of objects to be selected:";
					 cin>>r;
	    	         cout<<"The number of combinations are:";
	    	         cout<<a.ncr(n,r)<<endl;
	    	         break;
	        case 3 : break;
	        default : cout<<"INVALID ENTRY";}
	    	         
		}
		return 0;
}