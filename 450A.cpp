//https://codeforces.com/problemset/problem/450/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	double m,mx=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=m)
		{
			a[i]=0;
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(ceil(a[i]/m)>=mx)
		{
			mx=ceil(a[i]/m);
			ans=i;
		}
	}
	
	cout<<ans+1<<endl;
	
	
	return 0;
}
