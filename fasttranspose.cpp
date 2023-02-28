#include<iostream>
using namespace std;
const int max=20;
class sparse
{
private:
       int sp[20][3];
       int k;
       
public:
       void read();
void display();
sparse fasttranspose();
     
};
void sparse::read()
{
int m,n,num;
k=1;
cout<<"enter the rows in matrix";
cin>>m;
cout<<endl;
cout<<"enter the columns in matrix";
cin>>n;
cout<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<"enter the values";
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
sparse sparse::fasttranspose()
{
sparse b;
int m, n,T, t, i, j, freq[20], rowsp[30];
int row = sp[0][0];
int col = sp[0][1];
int M = sp[0][2];
b.sp[0][0] = col;
b.sp[0][1] = row;
b.sp[0][2] = M;
if(M == 0)
cout<<"not possible";
else
{
for(i = 0; i < col; i++)
{
 freq[i] = 0;
}
for(i = 1; i <= M; i++)
{
T = sp[i][1];
freq[T]++;
}
rowsp[0] = 1;
for(i = 1; i < col; i++)
{
rowsp[i] = rowsp[i - 1] + freq[i - 1];
}
for(i=0;i<col;i++)
  cout<<"the rowsp is"<<rowsp[i]<<"\t";
cout<<endl;
for(i = 1; i <= M; i++)
{
j = sp[i][1] ;
b.sp[rowsp[j]][0] = sp[i][1];
b.sp[rowsp[j]][1] = sp[i][0];
b.sp[rowsp[j]][2] = sp[i][2];
rowsp[j] = rowsp[j] + 1;
}
}
return b;
}
int main()
{
sparse a,b;
cout<<"enter the elements in the matrix"<<endl;
a.read();
a.display();
cout<<endl;
b=a.fasttranspose();
b.display();
}
