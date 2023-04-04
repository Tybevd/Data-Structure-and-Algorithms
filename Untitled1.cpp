#include<bits/stdc++.h>
using namespace std;
int t,n;
main(){
	cin>>t;while(t--)
	{
		int n;cin>>n;
		int a[n];
		map<int,int> b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		for(int i=0;i<=2;i++)
		{
			while(b[i]--)
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

