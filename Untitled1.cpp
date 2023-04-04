#include<bits/stdc++.h>
using namespace std;
int t,n;
void bublesort(int a[])
{
	int mn=1000005,mx=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				mn=min(mn,j);
				mx=max(mx,j+1);
				swap(a[j],a[j+1]);
			}
		}
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
		bublesort(a);
	
		
	
		
	}
	
}

