//QUESTION 3
//QUESTION 4
//RELATIONS
#include <iostream>
using namespace std;
class relation {
	private:
		int **ar;       //MATRIX
		int size;
		char *set;     //SET
	public:
		relation() {     //constructor
			size=10;
			ar=new int *[size];
			for (int i=0; i<size; i++) {
				ar[i]= new int [size];
			}
			set= new char [size];
		}

		void in_set() {               //to enter the set
			cout<<"Enter the size of the Set : ";
			int n;
			cin>>n;
			size = n;
			set = new char[size];
			for(int i=0; i<size; ++i) {
				cout<<"Element no.  "<<i+1<<" : ";
				cin>>set[i];
			}
		}

		void zero_ar() {               //to form a zero matrix
			for (int i = 0; i <size; i++) {
				for (int j = 0; j <size; j++) {
					ar[i][j] = 0;
				}
			}
		}

		void out_set() {       //to display the set
			cout<<"The given Set is {";
			for(int i=0; i<size; i++) {
				if(i==0)
					cout<<set[i];
				else
					cout<<","<<set[i];
			}
			cout<<"}";
			cout<<endl;
		}
		void in_relation() {        // to enter the relation
			cout<<"Enter the number of Relations:";
			int rel,r=0;
			cin>>rel;
			while (r<rel) {
				char m,n;
				int x,y,flag;
				cout<<"Enter the Relation:\n";
				cin>>m;
				cin>>n;
				for (int i=0; i<size; i++) {
					 if (set[i]==n) {
							y=i;
						} 
					 if (set[i]==m){
							x=i;
						}
					}
				for (int i = 0; i < size; i++) {
					for (int j = 0; j < size; j++) {
						if (x==i && y==j) {
							ar[i][j]=1;
							break;
						}
					}
				}
				r++;
			}
		}
		void out_ar() {       //to display the relation  matrix
			cout<<"The relation matrix is:"<<endl;
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					cout << ar[i][j] << " ";
				}
				cout<<endl;
			}
		}
	3	//to check if relation is REFLEXIVE
		bool reflexive() {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j<size; j++) {
					if(ar[i][i]!=1) {
						return false;
					}
				}
				return true;
			}
		}
		//to check if relation is SYMMETRIC
		bool symmetric() {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j<size; j++) {
					if(ar[i][j] != ar[j][i] ) {
						return false;
					}
				}
				return true;
			}
		}
		//to check if relation is ANTI-SYMMETRIC
		bool antisymmetric() {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j<size; j++) {
					if(ar[i][j] == 1 && ar[j][i]==1 && i!=j ) {
						return false;
					}
				}
				return true;
			}
		}
		//to check if relation is TRANSITIVE
		bool transitive () {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j<size; j++) {
					if(ar[i][j]==1 ) {
						for (int k=0; k<size; k++) {
							if(ar[j][k]==1 && ar[i][k]==0) {
								return false;
							}
						}
					}
				}
			}
			return true;
		}
		//to check if relation is in EQUIVALENCE RELATION
		bool equivalence() {
			if(reflexive() && symmetric() && transitive() )
				return true;
		}
		//to check if relation is in PARTIAL ORDER RELATION
		bool partialOrder() {
			if(reflexive() && antisymmetric() && transitive() )
				return true;
		}
};

int main() {
	relation r;
	r.in_set();
	r.out_set();
	cout<<endl;
	r.zero_ar();
	r.in_relation();
	r.out_ar();
	cout<<endl;
	int ch;
	cout<<"ENTER TO CHECK WHETHER THE RELATION IS \n";
	cout<<"1.REFLEXIVE \n";
	cout<<"2.SYMMETRIC \n";
	cout<<"3.ANTI-SYMMETRIC \n";
	cout<<"4.TRANSITIVE \n";
	cout<<"5.EQUIVALENCE RELATION\n";
	cout<<"6.PARTIAL ORDER REALTION \n";
	cout<<"7. TO EXIT \n";
	while (ch!=7) {
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch) {
			case 1: {
				if(r.reflexive()==1)
					cout<<"IT IS REFLEXIVE\n";
				else
					cout<<"IT IS NOT REFLEXIVE\n";
				break;
			}
			case 2: {
				if(r.symmetric()==1)
					cout<<"IT IS SYMMETRIC\n";
				else
					cout<<"IT IS NOT SYMMETRIC\n";
				break;
			}
			case 3: {
				if(r.antisymmetric()==1)
					cout<<"IT IS ANTI-SYMMETRIC\n";
				else
					cout<<"IT IS NOT ANTI-SYMMETRIC\n";
				break;
			}
			case 4: {
				if(r.transitive()==1)
					cout<<"IT IS TRANSITIVE\n";
				else
					cout<<"IT IS NOT TRANSITIVE\n";
				break;
			}
			case 5: {
				if(r.equivalence()==1)
					cout<<"IT IS IN EQUIVALENCE RELATION\n";
				else
					cout<<"IT IS NOT IN EQUIVALENCE RELATION\n";
				break;
			}
			case 6: {
				if(r.partialOrder()==1)
					cout<<"IT IS IN PARTIAL ORDER RELATION\n";
				else
					cout<<"IT IS NOT IN PARTIAL ORDER RELATION\n";
				break;
			}
			case 7:
				break;
			default:
				cout<<"Invalid choice!!!!"<<endl;
				break;
		}
	}
	return 0;
}

