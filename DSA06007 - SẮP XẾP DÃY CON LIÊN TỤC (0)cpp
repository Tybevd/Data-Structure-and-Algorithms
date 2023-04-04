#include<bits/stdc++.h>
using namespace std;
int t,n;
void insertionsort(int a[])
{
	int mn=1000005,mx=0;
	for(int i=1;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key)
		{
			mn=min(mn,j);
			mx=max(mx,i);
			a[j+1]=a[j];
			j--;
		}
		a[++j]=key;
	}
	cout<<mn+1<<" "<<mx+1<<endl;
}
main()
{
	cin>>t;while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		insertionsort(a);
	
		
	}
	
}

