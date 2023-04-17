#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
int n;
int a[1001];
void init()
{
	cin>>n;
}
void in(int a[],int n)
{
	for(int i=1;i<=n-1;i++)
	cout<<a[i]<<" ";
	cout<<a[n];
	cout<<endl;
}
int check(int a[],int n)
{
	for(int i=1;i<=n/2;i++)
	{
		if(a[i]!=a[n-i+1]) return 0;
	}
	return 1;
}
void quaylui(int i)
{
	for(int j=0;j<=1;j++)
	{
		
		a[i]=j;
		if(i==n){
		if(check(a,i)==1)
		in(a,i);
		} 
		else if(i<n)
		quaylui(i+1);
	}
}
main()
{
	init();
	quaylui(1);
}
