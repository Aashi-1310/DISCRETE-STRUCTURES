#include <iostream>
using namespace std;
 class relation {
 	private:
 		int **ar;
 		int size;
 		char *set;
 	public:
 		relation(){
 			size=3;
 			ar=new int *[size];
 			for (int i=0; i<size; i++){
 				ar[i]= new int [size];
			}
			set= new char [size];
		}
 		
 		void in_set(){
 		cout<<"Enter the size of the Set : ";
	        int n;
	        cin>>n;
			size = n;
	        set = new char[size];
			for(int i=0;i<size;++i){
	            cout<<"Element no.  "<<i+1<<" : ";
	            cin>>set[i];
	        	}
	    }
	    
	    void zero_ar(){
			for (int i = 0; i <size; i++) {
				for (int j = 0; j <size; j++) {
            		ar[i][j] = 0;
				}
			}
 		}
	    
	    void out_set(){
	    	  cout<<"The given Set is {";
		      for(int i=0;i<size;i++)
		      {
		        	if(i==0)
		            	cout<<set[i];
		        	else 
		            	cout<<","<<set[i];
		    	}
		      cout<<"}";
		      cout<<endl;
		}
		void in_relation(){
			cout<<"Enter the number of Relations";
		    int rel,r=0;
		    cin>>rel;
		    while (r<rel){
		        char m,n;
				int x,y,flag;
		        cout<<"Enter the Relation";
		        cin>>m;
		        cin>>n;
		        for (int i=0; i<size;i++){
		             if (set[i]==m || set[i] ==n){
		                if (set[i]==m && set[i]== n){
		                    x=i;
		                    y=i;}                         
		                else if (set[i]==n){
		                     y=i;}
		                else {
		                    x=i;}
					}
				}   
				for (int i = 0; i < size; i++) {
		            for (int j = 0; j < size; j++) {
		                if (x==i && y==j){
		                    ar[i][j]=1;
		                    break;
							}
						}
					}
			r++;
			}
	}
	    void out_ar(){      
	     for (int i = 0; i < size; i++) {
		        for (int j = 0; j < size; j++) {
					cout << ar[i][j] << " ";
				}
				cout<<endl;
		    }
		}
 };

int main(){
	relation r;
	 r.in_set();
	 r.out_set();
	 r.zero_ar();
	 r.in_relation();
	 r.out_ar();
	 return 0;}
	
