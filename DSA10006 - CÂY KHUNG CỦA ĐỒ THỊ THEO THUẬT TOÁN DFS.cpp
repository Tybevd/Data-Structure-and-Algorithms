#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>
using namespace std;
struct canh{
	int dau;
	int cuoi;
};
class Graph{
	private:
		int V;
		list<int> *adj;
		bool *chuaxet;
		canh *T;
		int sc;
	public:
		Graph(int V);
		void addEdge(int v,int w);
		void Tree_BFS(int u);
		void Tree_DFS(int u);
};
Graph::Graph(int V){
	this->V=V;
	adj= new list<int>[V];
	T=new canh[V];sc=1;
	chuaxet= new bool[V];
	for(int u=0;u<V;u++) chuaxet[u]=true; 
}
void Graph::addEdge(int v,int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
	
}
void Graph::Tree_DFS(int u)
{
	stack<int> Stack;
	Stack.push(u);chuaxet[u]=false;
	list<int>::iterator t;
	while(!Stack.empty()){
		int s=Stack.top();Stack.pop();
		for(t=adj[s].begin();t!=adj[s].end();++t){
			if(chuaxet[*t])
			{
				Stack.push(s);
				Stack.push(*t);
				chuaxet[*t]=false;
				T[sc].dau=s;T[sc].cuoi=*t;
				sc++;
				break;
			}
		}
	}
	if(sc<V-1) cout<<-1<<endl;
	else{
		for(int i=1;i<sc;i++)
		{
			cout<<T[i].dau<<" "<<T[i].cuoi<<endl;
		}
	}
}
main()
{
int t;cin>>t;while(t--)
{

	int n,m,u,dau,cuoi;
	cin>>n>>m>>u;
	Graph gh(n+1) ;
	for(int i=1;i<=m;i++){
		cin>>dau>>cuoi;
		gh.addEdge(dau,cuoi);
	}
	

	gh.Tree_DFS(u);
}}
