#include<iostream>
using namespace std;
class array
{
	
	private:int maxsize;
         	int A[20];
        	int size;
        	int N;
        
	public:array()
	       {
          	maxsize=20;
	    	size=0;
	    
	       }
        	void readarray();
        	void display();
        	void bubblesort();
        	
};
void array::readarray()
{
	int i;
	cout<<"enter the size of the array :";
	cin>>N;
	if(N>maxsize)
	{
		cout<<"array cannot created";
		cout<<"maxsize"<<maxsize;
		return;
	}
	else
	{
		for(i=0;i<N;i++)
		{
			cin>>A[i];
		}
		size=N;
	}
}
void array::display()
{
	int i;
	int max;
	for(i=0;i<size;i++)
	cout<<A[i]<<"\t";
	cout<<endl;
}
void array::bubblesort()
{
int i, j,temp;
for(i = 1; i < N; i++) 
{
for(j = 0; j < N - i; j++) 
{
if( A[j] > A[j + 1] ) 
{
temp = A[j]; 
A[j] = A[j + 1];
A[j + 1] = temp;
}
}
}
}
int main()
{
	
	array a;
	a.readarray();
	a.display();
	a.bubblesort();
	a.display();

}
