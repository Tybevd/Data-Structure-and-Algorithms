#include<bits/stdc++.h>
using namespace std;
int t,n,m;
main(){
	cin>>t;while(t--)
	{
		cin>>n>>m;
		int x;
		int a[n+1][m+1]={};
		a[0][1]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>x;
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
		cout<<a[n][m]<<endl;
	}
}
