#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
int a[55],n,kt;
void init()
{
	kt=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
}
void greedy(){
	init();
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j]) min=j;
		}
		if(min!=i&&min!=n-i-1) kt=1;
		swap(a[min],a[i]);
	}
	if(kt) cout<<"No";
	else
	cout<<"Yes";
	cout<<endl;
}
main()
{
	test
	{
		greedy();
	}
}
