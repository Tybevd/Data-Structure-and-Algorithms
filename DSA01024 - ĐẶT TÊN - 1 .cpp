#include<bits/stdc++.h>
using namespace std;
int n,k;
string x[35],a[35];
int chuaxet[35];
void quaylui(int i)
{
	for(int j=0;j<n;j++){
		if(j!=0&&a[j]==a[j-1]) continue;
		if(!chuaxet[j]&&a[j]>x[i-1])
		{
			chuaxet[j]=1;
			x[i]=a[j];
			if(i==k)
			{
				for(int i=1;i<=n;i++)
				cout<<x[i]<<" ";
				cout<<endl;
			}
			else quaylui(i+1);
			chuaxet[j]=0;
		}
	}
}
main(){
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	sort(a,a+n);
	x[0]="";
	quaylui(1);
}
