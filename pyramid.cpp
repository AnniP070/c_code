#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter a number"<<endl;
	cin>>n;
    k=n;
	for(int i=0 ; i<n;i++){
        for(int j=k; j>0;j--){
            cout<<" ";
        }
        for(int j=0; j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
        k--;
    }
}
