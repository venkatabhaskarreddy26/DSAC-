#include<iostream>
using namespace std;
class array
{
	private: 
	        int maxsize;
	        int A[20];
	        int size;
	public:
	        array()
			{
				maxsize=20;
				size=0;
					}  
			void read();
			void display();
			void traverse();
			void insert(int element,int location);
			void Delete(int location);
			int search(int element);		      
};
void array::read()
{
	int i,n;
	cout<<"enter the elements in an array";
	cin>>n;
	if(n>maxsize)
	{
		cout<<"array cannot be created";
		cout<<"maxsize"<<maxsize;
		
	}
	else
	{
		for(i=0;i<n;i++)
		{
			cin>>A[i];
		}
		size=n;
	}
}
void array::display()
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<A[i]<<"\t";
		
	}
}
void array::traverse()
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		cout<<A[i]<<"\t";
	
	}
}
void array::insert(int element,int location)
{
	int i;
	if(size>=maxsize)
	{
		cout<<"array overflow";
		return;
	}
	else
	{
		for(i=size-1;i>=location-1;i--)
		{
			A[i+1]=A[i];
		}
		A[location-1]=element;
		size++;
	}
}
void array::Delete(int location)
{
	int i;
	for(i=location;i<size;i++)
	{
		A[i-1]=A[i];
	}
	A[size-1]=0;
	size--;
}
int array::search(int element)
{
	int i;
	for(i=0;i<size-1;i++){
	if(A[i]==element)
	return(i);
    }
	return 0;
}
int main()
{
	array a;
	a.read();
	a.display();
	cout<<endl;
	a.traverse();
	cout<<endl;
	a.insert(45,3);
	a.display();
	cout<<endl;
	a.Delete(4);
	a.display();
	cout<<endl;
cout<<a.search(45);
	}
