#include<bits/stdc++.h>
using namespace std;
void quaylui(int a[],int n)
{
	if(n==0) return;
	int b[n];
	for(int i=0;i<n-1;i++)
	{
		b[i]=a[i]+a[i+1];
	}
	quaylui(b,n-1);
	cout<<"[";
	for(int i=0;i<n;i++)
	{
		if(i==n-1) cout<<a[i];
		else cout<<a[i]<<" ";
	}
	cout<<"] ";
}
main(){
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		quaylui(a,n);
		cout<<endl;
	}
}
