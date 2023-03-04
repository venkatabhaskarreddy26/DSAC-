#include<iostream>
using namespace std;
class array
{
	private:
		int maxsize;
		int A[20];
		int size;
	public :
		array()
		{
	      maxsize=20;
	      size=0;
        }
     void readarray();
     void display();
     void insert(int location,int element);
};
void array::readarray()
{
int i,n;
cout<<"Enter the size of array:";
cin>>n;
if(n>maxsize)
{
	cout<<"Array cannotbe created";
	cout<<"maxsize is"<<maxsize;
	return;
}
else
{
	for(i<0;i<n;i++)
	{
		cin>>A[i];
	}
	size=n;
}
}
void array::display()
{
	int i;
	for(i<0;i<size;i++)
	cout<<A[i]<<"\t";
	cout<<endl;
 } 
 void array::insert(int location,int element)
 {
 	int i;
 	if(size>=maxsize)
 	{
 		cout<<"Sorry array is overflow:";
 		return;
	 }
	 for(i = size - 1;i >= location - 1; i--)
	 {
	 	A[i+1]=A[i];
	 }
 	   A[location - 1]=element;
 	   size = size + 1;
 }
 int main()
{
 array a;
 a.readarray();
 a.display();
 a.insert(2,6);
 a.display();
 cout<<endl;
}

