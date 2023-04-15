#include<bits/stdc++.h>
using namespace std;
int a[25];
void in(int i)
{
	cout<<"(";
	for(int j=1;j<=i-1;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<a[i]<<") ";
}
void quaylui(int x,int i,int s)
{
	for(int j=x;j>=1;j--)
	{
		a[i]=j;
		if(j==s) in(i);
		else if(j<s) quaylui(j,i+1,s-j);
	}
}
main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;
		quaylui(n,1,n);
		cout<<endl;
		
	}
}
