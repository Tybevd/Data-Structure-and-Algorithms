#include<bits/stdc++.h>
using namespace std;
string s="";
int n,a[10][10],check;
void Try(int i,int j)
{
	if(i==n-1&&j==n-1)
	{
		check=1;
		cout<<s<<" ";
	}
	if(i+1<n&&a[i+1][j]==1)
	{
		a[i][j]=0;
		s+='D';
		Try(i+1,j);
		s.pop_back();
		a[i][j]=1;
	}
	if(j-1>=0&&a[i][j-1]==1)
	{
		a[i][j]=0;
		s+='L';
		Try(i,j-1);
		s.pop_back();
		a[i][j]=1;
	}
	if(j+1<n&&a[i][j+1]==1)
	{
		a[i][j]=0;
		s+='R';
		Try(i,j+1);
		s.pop_back();
		a[i][j]=1;
	}
	if(i-1>=0&&a[i-1][j]==1)
	{
		a[i][j]=0;
		s+='U';
		Try(i-1,j);
		s.pop_back();
		a[i][j]=1;
	}
	
}
main(){
	int t;cin>>t;while(t--)
	{
		cin>>n;
		check=0;
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) cin>>a[i][j];
		if(a[0][0]==0) cout<<"-1"<<endl;
		else
		{
			Try(0,0);
			if(!check) cout<<"-1";
			cout<<endl;
		}
	}
}
