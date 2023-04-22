#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> List[1001];
int check[1001];
pair<int,int> dem[1001];
void init()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		dem[i].first=0;
		dem[i].second=0;
	}
	for(int i=1;i<=n;i++){List[i].clear();
	} 
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
int kteuler()
{
	int demle=0;
	for(int i=1;i<=n;i++)
	{
		
		for(int j:List[i]) {
			dem[i].first++;
			dem[j].second++;
		}
		
	}
	for(int i=1;i<=n;i++)
	{
		if(dem[i].first!=dem[i].second) return 0;
	}
	return 1;
}
main()
{
	int t;cin>>t;while(t--)
	{init();
	cout<<kteuler()<<endl;
	}
	
}
