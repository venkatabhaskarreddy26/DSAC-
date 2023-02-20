#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void printarray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int arr[]={12,11,56,7,8,5};
	int N= sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,N);
	printarray(arr,N);
	return 0;
}
