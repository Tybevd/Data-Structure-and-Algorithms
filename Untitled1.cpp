#include<bits/stdc++.h>
using namespace std;
void xuly(int n)
{
	queue<int> q;
	q.push(9);
	int so;
	while(1)
	{
		so=q.front(); 
		if(so%n==0) break;
		q.pop();
		q.push(so*10);
		q.push(so*10+9);
	}
	cout<<so<<endl;
}
main(){
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		xuly(n);
	}
}
