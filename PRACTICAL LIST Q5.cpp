//QUESTION 5
//FIBONACCI SERIES
#include <iostream>
using namespace std;

class fibonacci{
	private:
		int n;
	public:
		int fib(int n)
	{
		if (n==0){
			return 0;}
		else if (n==1){
			return 1;}
		else{
			return (fib(n-1)+fib(n-2));}
	}
};


int main(){
	int n;
	int i=0;
	fibonacci f;
	cout << "Enter the number of terms of series : ";
    cin >> n;
    cout << "\nFIBONACCI SERIES: ";
    while (i<n-1){
    	cout<< f.fib(i)<<", ";
    	i++;
	}
	cout<< f.fib(n-1);
    return 0;	
}