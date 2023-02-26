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
        	void selectionsort();
        	
};
void array::readarray()
{
	int i;
	cout<<"Enter the size of the array :";
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
void array::selectionsort()
{
int i, j;
int minpos,temp;
for(i=0;i<N-1;i++)
{
	minpos=i;
	for(j=i+1;j<N;j++)
	{
		if(A[j]<A[minpos])
		minpos = j;
	}
	if(minpos!=1)
	{
		temp = A[i];
		A[i]=A[minpos];
		A[minpos]=temp;
	}
 }
}
int main()
{
	
	array a;
	a.readarray();
	a.display();
	a.selectionsort();
	a.display();

}
