#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)
int n,k,a[55];
void init()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	cin>>a[i];
}
void sinh()
{
	int j=k;
	while(a[j]==n-k+j) j--;
	if(j==0) cout<<k<<" ";
	else {
		a[j]+=1;
		cout<<a[j+1]-a[j];
	}
	cout<<endl;
}
main()
{
	test{
init();
sinh();}

}
