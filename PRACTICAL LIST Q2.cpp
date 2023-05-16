//QUESTION 2
//OPERATIONS ON SETS
#include <iostream>
#include <iomanip> 
using namespace std;

class set{
	private:
	int *ar;
	int size;
	
	public:
		set(){
			size=10;
			ar=new int [size];
		}
		void input(){  
	        cout<<"Enter the size of array : ";
	        int n;
	        cin>>n;
			size = n;
	        ar = new int[size];
			for(int i=0;i<size;++i){
	            cout<<"element no.  "<<i+1<<" : ";
	            cin>>ar[i];
	        }
	    }
		void unique(){          //removes duplicate value
			for(int i=0;i<size;++i){
		        for(int j=i+1;j<size;++j){
		            if(ar[i]==ar[j]){
						for(int z=j;z<size;++z){
		                    ar[z]=ar[z+1];              
		                }
		                --size;   
		                --j;
		            }
		        }
			}
		}

		void output(){ 
		    unique();                    
	        cout<<"{ ";
	        for(int i=0;i<size;++i){            
	            cout<<ar[i]<<" ";
	        }
	        cout<<"}"<<endl;
	    }
			
		/*void setunion(set &a)  
		{
		 	int i=0,j=0,k=0;
			while(i<size && j<a.size) 
			{
		        if(ar[i]<a.ar[j])
					ar[k++]=ar[i++];
				else
					ar[k++]=a.ar[j++];
			}
		    
		    while(i<size) 
			{
				ar[k++]=ar[i++];
		    }
		    
		    while(j<a.size)
		    {
				ar[k++]=a.ar[j++];
			}
		    
		    size=size+a.size;
		    output();
		}*/
		void setunion(set a){
			int s=size;
			size+=a.size;
			int j=0;
			for (int i=s;i<size, j<a.size;i++,j++){
					ar[i]=a.ar[j];
			}
			output();	
		}
		void intersection(set a,set b)
		{size=0;
		for(int i=0;i<a.size;i++)
	    {
	        for(int j=0;j<b.size;j++)
	        {
	            if(a.ar[i]==b.ar[j])
	            {
	                ar[size]=a.ar[i];
	                size++;
	            }
	        }
	    }  
		output();
		}
		int subset(set b)
		{
		    int i=0,j=0;
		    for(i=0;i<b.size;i++)  
		    {
		        for(j=0;j<size;j++)
		        {
		            if(b.ar[i]==ar[i])
		            break;
		        }
		        if(j==size)
		            return 0;
		    }     
		    return 1;
		}
		
		void complement(set u) 
		{ 
		    
		    int p[u.size],ctr=0;
		    for(int i=0;i<size;i++)
		    {
		        for(int j=0;j<u.size;j++)
		        {
		            if(u.ar[j]==ar[i])
		            {
		                i++;
		                continue;
		            }
		            else
		            {
		                p[ctr]=u.ar[j];
		                ctr++;
		            }
		        }
		    }
		    cout<<"complement is {";
		    for(int i=0;i<ctr;i++)
		    {
		        if(i==0)
		            cout<<p[i];
		        else
		            cout<<","<<p[i];
		    } 
		    cout<<"} \n";
		}
		
		void cartesian(set b)
		{
		    cout<<"{";
		    for(int i=0;i<size;i++)
		    {
		        for(int j=0;j<b.size;j++)
		            cout<<"("<<ar[i]<<","<<b.ar[j]<<")"<<",";
		    }
		    cout<<"} \n";
		}
		
		void symdif(set a)
		{
		    int c=0; int p[10];int flag;
		    for(int i=0;i<size;i++)
		    {
		        flag=0;
		        for(int j=0;j<a.size;j++)
		        {
		            if(ar[i]==a.ar[j])
		            {
		                flag=0;
		                break;
		            }
		            else
		            {
		                flag=1;
		            }
		        }
		        if(flag==1)
		        {
		            p[c]=ar[i];
		            c++;
		        }
		    }
			for(int k=0;k<a.size;k++){
		        flag=0;
		        for(int h=0;h<size;h++)
		        {
		            if(a.ar[k]==ar[h])
		            {
		                flag=0;
		                break;
		            }
		            else
		            {
		                flag=1;
		            }
		        }
		        if(flag==1)
		        {
		            p[c]=a.ar[k];
		            c++;
		        }
		    }
		    cout<<"The symmetric differnce is "<<"{";
		    for(int f=0;f<c;f++)
		    cout<<p[f]<<",";
		    cout<<"} \n";
		}
		
		void diff(set a)
		{
		    int c=0; int p[10];int flag;
		    for(int i=0;i<size;i++)
		    {
		        flag=0;
		        for(int j=0;j<a.size;j++)
		        {
		            if(ar[i]==a.ar[j])
		            {
		                flag=0;
		                break;
		            }
		            else
		            {
		                flag=1;
		            }
		        }
		        if(flag==1)
		        {
		            p[c]=ar[i];
		            c++;
		        }
		    }
		    cout<<"The differnce is "<<"{";
		    for(int f=0;f<c;f++)
		    cout<<p[f]<<",";
		    cout<<"} \n";
		}    		

};

int main() 
{
int ch,ch2,ch3;
set s1,s2,s3,u;
cout<<"ENTER \n";
cout<<"1. TO INPUT THE FIRST SET \n";
cout<<"2. TO INPUT THE SECOND SET \n";
cout<<"3. TO PRINT THE COMPLEMENT OF THE SET \n";
cout<<"4. TO PRINT THE INTERSECTION OF THE SETS \n";
cout<<"5. TO PRINT THE UNION OF THE SET \n";
cout<<"6. TO CHECK WHETHER THE SET IS A SUBSET \n";
cout<<"7. TO PRINT THE CARTISIAN PRODUCT OF THE SETS \n";
cout<<"8. TO PRINT THE SYMMETRIC DIFFERENCE OF THE SETS \n";
cout<<"9. TO PRINT THE DIFFERENCE OF THE SETS \n";
cout<<"10. TO EXIT \n";
while (ch!=10){
	cout<<"Enter your choice \n";
    cin>>ch;
    s1.unique();
    s2.unique();
    switch(ch)
    {
        case 1 : s1.input();
		         break;
	    case 2  : s2.input();
		         break;
		case 3: cout<<"what you want to find complement of 1)A or 2)B"<<endl;
                cin>>ch2;
                cout<<"Enter the Universal set"<<endl;
                u.input();
                if(ch2==1)
                    s1.complement(u);
                else
                    if(ch2==2)
                    {
                        s2.complement(u);
                    }
                    else
                        cout<<"wrong choice";      
                break; 
		case 5: cout<<"The union of sets is:";
		        s1.setunion(s2);
                break;
        case 4: cout<<"The intersection of sets is:";
		        s3.intersection(s1,s2);
                break; 
        case 6: if(s2.subset(s1))
                    cout<<"A is Subset of B"<<endl;
                else
                    if(s1.subset(s2))
                        cout<<"B is subset of A"<<endl;
                    else
                        cout<<"A and B are not subset of each other"<<endl;
                break;
        
        case 7: cout<<"The cartesian product is ";
                s1.cartesian(s2);
                break;
        case 8: s1.symdif(s2);
                break;
        case 9: cout<<"Enter your choice "<<"1.A-B"<<endl<<"2.B-A"<<endl;
                cin>>ch3;
                if(ch3==1)
                {
                    s1.diff(s2);
                }
                else if(ch3==2)
                {
                    s2.diff(s1);
                }
                else 
                    cout<<"Wrong choice ";
                break;
        case 10: break;
        default:cout<<"wrong choice";
                break; }
            }
return 0;}