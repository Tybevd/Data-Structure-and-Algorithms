#include<bits/stdc++.h>
using namespace std;
int n,t,A[12][12],dem,kt;
char X[101];
void init()
{
	kt=0;
	cin>>n;
	dem=0;
	memset(A,0,sizeof(A));
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++) cin>>A[i][j];
}
void Try(int i,int j)
{
	if(i==n-1&&j==n-1)
	{
		kt=1;
		for(int i=0;i<dem;i++)
		cout<<X[i];
		cout<<" ";
	}
	if(A[i+1][j])
	{
		A[i][j]=0;
		X[dem++]='D';
		Try(i+1,j);
		dem--;
		A[i][j]=1;
	}
	if(A[i][j-1])
	{
		A[i][j]=0;
		X[dem++]='L';
		Try(i,j-1);
		dem--;
		A[i][j]=1;
	}
	if(A[i][j+1])
	{
		A[i][j]=0;
		X[dem++]='R';
		Try(i,j+1);
		dem--;
		A[i][j]=1;
	}
	if(A[i-1][j])
	{
		A[i][j]=0;
		X[dem++]='U';
		Try(i-1,j);
		dem--;
		A[i][j]=1;
	}
}
main(){
	cin>>t;while(t--)
	{
		init();
		Try(0,0);
		if(!kt) cout<<-1;
		cout<<endl;
		
	}
}
