#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> List[1001];
int check[1001];
void init()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) List[i].clear();
	int a,b;
	memset(check,0,sizeof(check));
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		List[a].push_back(b);
	}
}
void DFS(int u)
{
	check[u]=1;
	for(int t:List[u])
	{
		if(!check[t]) DFS(t);
	}
}
int kttinhlienthong()
{
	for(int i=1;i<=n;i++)
	{
		DFS(i);
		for(int j=1;j<=n;j++)
		{
			if(!check[j]) return 0;
		}
		memset(check,0,sizeof(check));
	}
	return 1;
}
main()
{
	int t;cin>>t;while(t--)
	{init();
	if(kttinhlienthong()) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
	}
	
}
