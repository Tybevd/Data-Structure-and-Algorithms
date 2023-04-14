#include<bits/stdc++.h>
using namespace std;
char x[101];
int kt,dem,n;
int A[12][12];

void quaylui(int i,int j)
{
	if(i==n-1&&j==n-1)
	{
		kt=1;
		for(int i=0;i<dem;i++)
		cout<<x[i];
		cout<<" ";
		return;
	}
	if(i<n-1&&A[i+1][j])
	{
		x[dem++]='D';
		quaylui(i+1,j);
		dem--;
	}
	if(j<n-1&&A[i][j+1])
	{
		x[dem++]='R';
		quaylui(i,j+1);
		dem--;
	}
}
main(){
	int t;cin>>t;while(t--)
	{
	cin>>n;
	kt=0;
	dem=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>A[i][j];
	if(A[0][0]==1)
	quaylui(0,0);
	if(!kt) cout<<-1;
	cout<<endl;
	}
}
