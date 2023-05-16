//QUESTION 10
//TRUTH TABLES
#include <iostream>
#include<string>
using namespace std;
class logic{
	public:
		char x[4],y[4];
		char X[4]={'T','T','F','F'};
		char Y[4]={'T','F','T','F'};
		void assign(){
			for (int i=0; i<4;i++){
				if (X[i]=='T'){
					x[i]=1;}
				else
				    x[i]=0;
				if (Y[i]=='T'){
					y[i]=1;
				}
				else
				    y[i]=0;
			}
		}
		void conjunction(){
			assign();
			cout<<"-------------\n";
			cout<<"| X | Y |XnY|\n";
			for (int i=0;i<4;i++){
				if (x[i]&y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" | T |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" | F |\n";
				}
			}
			cout<<"-------------\n";
		}
		void disjunction(){
			assign();
			cout<<"-------------\n";
			cout<<"| X | Y |XUY|\n";
			for (int i=0;i<4;i++){
				if (x[i]|y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" | T |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" | F |\n";
				}
			}
			cout<<"-------------\n";
		}
		void nand(){
			assign();
			cout<<"---------------\n";
			cout<<"| X | Y |X'nY'|\n";
			for (int i=0;i<4;i++){
				if (x[i]&y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  F  |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  T  |\n";
				}
			}
			cout<<"---------------\n";
		}
		void nor(){
			assign();
			cout<<"---------------\n";
			cout<<"| X | Y |X'UY'|\n";
			for (int i=0;i<4;i++){
				if (x[i]|y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  F  |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  T  |\n";
				}
			}
			cout<<"---------------\n";
		}
		void xOr(){
			assign();
			cout<<"-------------\n";
			cout<<"| X | Y |X^Y|\n";
			for (int i=0;i<4;i++){
				if (x[i]^y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" | T |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" | F |\n";
				}
			}
			cout<<"-------------\n";
		}
		void xnor(){
			assign();
			cout<<"---------------\n";
			cout<<"| X | Y |X'^Y'|\n";
			for (int i=0;i<4;i++){
				if (x[i]^y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  F  |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  T  |\n";
				}
			}
			cout<<"---------------\n";
		}
		void negation(){
			assign();
			cout<<"-----------------\n";
			cout<<"| X | X'| Y | Y'|\n";
			for (int i=0;i<4;i++){
				char nx[4],ny[4];
				if (x[i]==1)
					nx[i]='F';
				else
					nx[i]='T';
				if (y[i]==1)
					ny[i]='F';
				else
					ny[i]='T';
				cout<<"| "<<X[i]<<" | "<<nx[i]<<" | "<<Y[i]<<" | "<<ny[i]<<" |\n";
			}
			cout<<"-----------------\n";
		}
		void conditional(){
			assign();
			cout<<"---------------\n";
			cout<<"| X | Y |X-->Y|\n";
			for (int i=0;i<4;i++){
				if (!x[i]|y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  T  |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  F  |\n";
				}
			}
			cout<<"---------------\n";
		}
		void biconditional(){
			assign();
			cout<<"---------------\n";
			cout<<"| X | Y |X<->Y|\n";
			for (int i=0;i<4;i++){
				if (!x[i]^y[i]==1){
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  T  |\n";
				}
				else{
					cout<<"| "<<X[i]<<" | "<<Y[i]<<" |  F  |\n";
				}
			}
			cout<<"---------------\n";
		}
		
};
int main(){
	logic l;
	int ch;
	cout<<"ENTER TO PRINT THE TRUTH TABLE FOR: \n";
	cout<<"1.CONJUCTION\n";
	cout<<"2.DISJUNCTION\n";
	cout<<"3.EXCLUSIVE OR\n";
	cout<<"4.EXCLUSIVE NOR\n";
	cout<<"5.CONDITIONAL\n";
	cout<<"6.BI-CONDITIONAL\n";
	cout<<"7.NAND\n";
	cout<<"8.NOR\n";
	cout<<"9.NEGATION\n";
	cout<<"10.TO EXIT\n";
	while (ch!=10){
		cout<<endl;
		cout<<"Enter your choice:";
	    cin>>ch;
	    cout<<endl;
	    switch(ch){
	    	case 1: cout<<"CONJUCTION\n";
	    			l.conjunction();
	    			break;
	    	case 2: cout<<"DISJUCTION\n";
	    			l.disjunction();
	    			break;
	    	case 3: cout<<"EXCLUSIVE OR\n";
	    			l.xnor();
	    			break;
	    	case 4: cout<<"EXCLUSIVE NOR\n";
	    			l.xOr();;
	    			break;
	    	case 5: cout<<"CONDITIONAL\n";
	    			l.conditional();
	    			break;
	    	case 6: cout<<"BI-CONDITIONAL\n";
	    			l.biconditional();
	    			break;		
		    case 7: cout<<"NAND\n";
	    			l.nand();
	    			break;
			case 8: cout<<"NOR\n";
	    			l.nor();
	    			break;
			case 9: cout<<"NEGATION\n";
	    			l.negation();
	    			break;
			case 10:break;
			default: cout<<"INVALID ENTRY";
			         break;
			}
		}

	return 0;
}
