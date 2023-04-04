#include<bits/stdc++.h>
using namespace std;
int t,n;
main()
{
	cin>>t;while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int kt=1;
		for(int i=0;i<n-1;i++)
		{
			int min=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[min]>a[j])
				{
					cout<<min+1<<" ";
					kt=0;
					break;
				}
			}
			if(!kt) break;
		}
		for(int i=n-1;i>0;i--)
		{
			int max=i;
			for(int j=i-1;j>=0;j--)
			{
				if(a[max]<a[j])
				{
					cout<<max+1;
					kt=1;
					break;
				}
				
			}
			if(kt) break;
		}
		cout<<endl;
		
		
	}
	
}

