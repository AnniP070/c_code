#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<endl;
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"# ";
		}
		for(k=1;k<=2*(n-i);k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"# ";
		}
	}
	for(i=n-1;i>0;i--)
	{
		cout<<endl;
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"# ";
		}
		for(k=1;k<=2*(n-i);k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"# ";
		}
	}
}
