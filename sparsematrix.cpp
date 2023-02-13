#include <iostream>
using namespace std;
const int Max=20;
class sparse
{
	private : int sp[Max][3];int k;
	public : 
	void read()
	{
		int m,n,num;
		k=1;
		cout<<"Enter the rows in matrix :";
		cin>>m;
		cout<<endl;
		cout<<"Enter ther columns in matrix : ";
		cin>>n;cout<<endl;
		for(int i=0; i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<"\n Enter the values ";
				cin>>num;
				if(num!=0)
				{
					sp[k][0]=i;
					sp[k][1]=j;
					sp[k][2]=num;
					k++;
				}
			}
		}
		sp[0][0]=m;
		sp[0][1]=n;
		sp[0][2]=k-1;
	}
	sparse add_poly(sparse b);
	void display();
};
sparse sparse::add_poly(sparse b)
{
	sparse c;
	int i,j,k,row1,row2,col1,col2,m1,m2;
	i=j=1;
	row1=sp[0][0];
	col1=sp[0][1];
	m1=sp[0][2];
	row2=b.sp[0][0];
	col2=b.sp[0][1];
	m2=b.sp[0][2];
	if(row1==row2 && col1==col2)
	{
		k=1;
		c.sp[0][0]=sp[0][0];
		c.sp[0][1]=sp[0][1];
		while(i<=m1 && j<=m2)
		{
			if(sp[i][0]==b.sp[j][0])
			{
				if(sp[i][1]==b.sp[j][1])	
				{
					c.sp[k][0]=sp[i][0];
					c.sp[k][1]=sp[i][1];
					c.sp[k][2]=sp[i][2]+b.sp[j][2];
				}
				else if(sp[i][1]< b.sp[j][1])
				{
					c.sp[k][0]=sp[i][0];
					c.sp[k][1]=sp[i][1];
					c.sp[k][2]=sp[i][2];
					i++;k++;
				}
				else
				{
				  	c.sp[k][0]=sp[j][0];
					c.sp[k][1]=sp[j][1];
					c.sp[k][2]=sp[j][2];
					j++;k++;	
				}
			}
			else 
			{
				if(sp[i][0]=b.sp[j][0])
				{
					c.sp[k][0]=sp[i][0];
					c.sp[k][1]=sp[i][1];
					c.sp[k][2]=sp[i][2];
					i++;k++;
				}
				else 
				{
				    c.sp[k][0]=sp[i][0];
					c.sp[k][1]=sp[j][1];
					c.sp[k][2]=sp[j][2];
					j++;k++;	
				}
			}
		}
		while(i<=m1)
		{
		        	c.sp[k][0]=sp[i][0];
					c.sp[k][1]=sp[i][1];
					c.sp[k][2]=sp[i][2];
					j++;k++;
		}
		while (j<=m2)
		{
		        	c.sp[k][0]=b.sp[j][0];
					c.sp[k][1]=b.sp[j][1];
					c.sp[k][1]=b.sp[j][2];
					j++;k++;
		}
		c.sp[0][2]=k-1;
		return c;
	}
	else 
	{
		cout<<"\n Addition is not possible on dimensions of both matrices do not match ....";
	}
}
void sparse::display()
{
	for(int i=0;i<=sp[0][2];i++)
	{
		for(int j=0;j<3;j++)
		{
		  cout<<sp[i][j];	
		}
		cout<<endl;
	}
}
int main()
{
	sparse a,b,c;
	cout<<"\n Enter element in first matrix: ";
	a.read();
	a.display();
	cout<<"\n Enter element in second matrix: ";
	b.read();
	b.display();
	a.add_poly(b);
	cout<<"\n Addition of sparse poly: ";
	c=a.add_poly(b);
	c.display();
	return 0;
}
