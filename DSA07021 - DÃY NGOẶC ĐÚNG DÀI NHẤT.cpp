#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int ketqua(string s){
	int n=s.length();
	int ketqua=0;
	stack<int> st;
	st.push(-1);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(') st.push(i);
		else
		{
			st.pop();
			if(!st.empty()){
				int j=st.top();
				ketqua=max(ketqua,i-j);
			}
			else st.push(i);
		}
	}
	return ketqua;
}
main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		cout<<ketqua(s)<<endl;
	}
}
