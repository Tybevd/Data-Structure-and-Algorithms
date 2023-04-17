#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
int n,k;
int a[55];
void init()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void sapxep()
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}
}
void greedy(){
	init();
	sapxep();
	int sum1=0,sum2=0;
	
	for(int i=0;i<n;i++)
	{
		if(i<min(k,n-k)) sum1+=a[i];
		else sum2+=a[i];
	}
	cout<<sum2-sum1<<endl;
}
main(){
	test greedy();
}
