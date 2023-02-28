#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
using namespace std;


class quick
{
   int a[20];
   int n;
   public:
	int sizearr(){return n-1;
				}
   int partition(int m,int p);
   void readarray();
   void printarray();
   void quicksort(int low, int high);
   void display();
};
void quick::readarray()
{
	cout<<"Enter the size of the array:\n";
	cin>>n;
	cout<<"enter "<<n<<"elements\n";
	for(int i=0;i<n;i++)
	  cin>>a[i];
}
void quick::printarray()
{
	 cout<<"the values in the array are:\n";
	 for(int i=0;i<n;i++)
	   cout<<a[i]<<"\t";
	 cout<<endl;  
}
int quick :: partition(int m, int p)
{
    int v=a[m];
    int i = m+1;
    int j = p;
    do{
        while (a[i] <= v && i<p)
        {
            i++;
        }

        while(a[j]>v){
            j--;
        }

        if (i<j)
            { int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
			}
    }while (i<j);
    a[m] = a[j]; a[j] = v; 
	return j;
}
void quick::quicksort(int p, int q)
{
    if (p<q)
    {
        int j = partition(p, q);
        quicksort(p, j-1);
        quicksort(j+1, q);
    }
}

void print1(int a[], int low, int high)
{
    for (int i=low;i<=high;i++)
        cout<<setw(5)<<"("<<i<<")";
    cout<<"\n";
    for (int i=low;i<=high;i++)
        cout<<setw(6)<<a[i]<<" ";
    cout<<endl<<endl;
}

int main()
{
    quick qq;
    qq.readarray();
    qq.printarray();
    qq.quicksort(0,qq.sizearr());
    qq.printarray();
    
    return 0;
}
