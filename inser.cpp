#include<iostream>
using namespace std;
class array
{
	private:
		int maxsize;
		int A[20];
		int size;
		int n;
	public: 
	    array()
	{
		maxsize=20;
		size=0;
	}
	void read_array();
	void display();
	void insert(int location,int element);
};
void array::read_array()
{
	int i;
	cout<<"enter the size of the array:";
	cin>>n;
	if(n>maxsize)
	{
		cout<<"Array cannot be created";
		cout<<"maxsize is :"<<maxsize;
		return;
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
void array::insert(int location,int element)
{
	int i;
	if(size>=maxsize)
	{
		cout<<"array overflow";
		return;
	}
	for(i=size-1;i>=location-1;i--)
	{
		A[i+1]=A[i];
	}
	A[location-1]=element;
	size=size+1;
}
	int main()
	{
		array a;
		a.read_array();
		a.display();
		cout<<endl;
		a.insert(4,5);
		a.display();
	}
