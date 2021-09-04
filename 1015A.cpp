//https://codeforces.com/problemset/problem/1015/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[1000],len=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		a[i]=i;
	}
	while(n--)
	{
		int l,r;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			a[i]=0;
		}
	}
	
	for(int i=1;i<=m;i++)
	{
		if(a[i]!=0)
		{
			len++;
		}
	}
	
	cout<<len<<endl;
	
	for(int i=1;i<=m;i++)
	{
		if(a[i]!=0)
		{
			cout<<a[i]<<" ";
		}
	}
	
	
	return 0;
	
	
}
