#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0; j<n-i-1;j++)
	if(arr[j]>arr[j+1])
	swap(arr[j],arr[j+1]);
}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int arr[]={5,1,4,2,-8,89,65,25,95,101};
	int N = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,N);
	cout<<"Sorted array: \n";
	printarray(arr,N);
	return 0;
}
