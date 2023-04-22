
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
		List[b].push_back(a);
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
		int dem=0;
		for(int j:List[i]) {
			dem++;
		}
		if(dem%2==1) demle++;
	}
	if(demle==2) return 1;
	if(demle==0) return 2;
	return 0;
}
main()
{
	int t;cin>>t;while(t--)
	{init();
	cout<<kteuler()<<endl;
	}
	
}
