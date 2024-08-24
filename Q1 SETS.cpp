//QUESTION 1
//SETS
#include <iostream>
#include <iomanip>   
#include <cmath>

using namespace std;

class Set{       
private:         
    int *arr;         //array
    int size;     //variable

public:             
    void input(){  
        cout<<"Enter the size of array : ";
        int n;
        cin>>n;

        size = n;
        if(size>0){
            arr = new int[size];     
        }


        for(int i=0;i<size;++i){
            cout<<"element no.  "<<i+1<<" : ";
            cin>>arr[i];
        }
    }
    void output(){                     
        cout<<"[ ";
        for(int i=0;i<size;++i){            
            cout<<arr[i]<<" ";
        }
        cout<<"]"<<endl;
    }

    void unique(){          //removes duplicate value

        for(int i=0;i<size;++i){
            for(int j=i+1;j<size;++j){
                    if(arr[i]==arr[j]){

                       for(int z=j;z<size;++z){
                        arr[z]=arr[z+1];              
                       }
                       --size;   
                       --j;
                    }
            }

        }
    }

    bool ismember(){                       //returns boolean
        cout<<"Enter a number : ";/       //Finds the number using linear search
        int m;
        cin>>m;
        for(int i=0;i<size;++i){
            if(arr[i]==m){
                return true;
            }
       }
    }
    void cardinality(){           //returns cardinality of the set
        cout<<"The cardinality of the set is: "<< size<<endl;

    }
    
    void powerSet(){
    	int count=1,temp;
    	count=pow(2,size);
    	cout<<"{ { } ";
    	for (int i=1; i<count; i++){
    		temp=i;
    		cout<<"{ ";
			for (int j=0; j<size; j++){	
				if (temp&1){
					cout<<arr[j]<<" ";}
				temp=temp>>1;
				}
			cout<<"} ";
			}
		cout<<"}"<<endl; 	
		}
	
};


int main(){
	Set s1;
	int ch;
	cout<<"ENTER \n";
	cout<<"1. TO INPUT THE SET \n";
	cout<<"2. TO PRINT THE SET \n";
	cout<<"3. TO PRINT THE CARDINALITY OF THE SET \n";
	cout<<"4. TO CHECK WHETHER A NUMBER IS IN THE SET \n";
	cout<<"5. TO PRINT THE POWER SET \n";
	cout<<"6. TO EXIT \n";
	while (ch!=6){
		cout<<"Enter your choice:";
	    cin>>ch;
	    s1.unique();
		switch(ch){
			case 1 : s1.input();
			         break;
		    case 2  : s1.output();
			         break;
		    case 3  : s1.cardinality();
		              break;
		    case 4  : if (s1.ismember()==true)
		    				cout<<"It is in the set \n";
		    		  else
					  		cout<<"It is not in the set \n";
		              break;
		    case 5  : s1.powerSet();
		              break;
		    case 6  : break;
		    default : cout<<"INVALID ENTRY\n";
		              break;
	    
	}
	}
return 0;    
}
