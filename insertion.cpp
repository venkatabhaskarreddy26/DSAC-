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
        	void insertionsort();
        	
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
void array::insertionsort()
{
int i, j,element;
for(i=1;i<N;i++)
{
	element = A[i];
	j=i;
	while((j>0)&&(A[j-1]>element))
	{
		A[j]=A[j-1];
		j=j-1;
	}
	A[j]=element;
	}
}
int main()
{
	
	array a;
	a.readarray();
	a.display();
	a.insertionsort();
	a.display();

}
