#include<bits/stdc++.h>
using namespace std;
vector<int> List[100001];
int check[100001];
int n,m,ans,dem;
void DFS(int u)
{
	check[u]=1;
	for(int t:List[u])
	{
		if(!check[t]) {dem++;
		DFS(t);
		}
	}
	
}
main()
{
	int t;cin>>t;while(t--)
	{
		cin>>n>>m;
		ans=0;
		int a,b;
		for(int i=1;i<=n;i++) List[i].clear();
		memset(check,0,sizeof(check));
		for(int i=1;i<=m;i++)
		{
			cin>>a>>b;
			List[a].push_back(b);
			List[b].push_back(a);
		}
		for(int i=1;i<=n;i++)
		{
			if(!check[i])
			{
				dem=1;
				DFS(i);
				ans=max(dem,ans);
			}
		}
		cout<<ans<<endl;
	}
}
